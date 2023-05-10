
#include <stdio.h>

typedef unsigned char u8;
typedef int s32;
typedef long long s64;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

#define SP_LEVEL_MAX 20

// from /src/game/file.h
typedef struct save_data
{
  s32 chksum1;
  s32 chksum2;
  u8 completion_bitflags;
  u8 flag_007;
  u8 music_vol;
  u8 sfx_vol;
  u16 options;
  u8 unlocked_cheats_1;
  u8 unlocked_cheats_2;
  u8 unlocked_cheats_3;
  char padding;
  u8 times[(SP_LEVEL_MAX-1) * 4];
} save_data;

// From /src/random.c
/**
 * Iterates the parameter as if it were the random seed and returns the next 32 bit random value.
 * This uses the same logic as randomGetNext.
 */ 
u32 randomGetNextFrom(u64 *param_1) {
    // best -O1 guess
    *param_1 ^= (((((*param_1 << 0x3f) >> 0x1f) | ((*param_1 << 0x1f) >> 0x20)) ^ ((*param_1 << 0x2c) >> 0x20)) >> 0x14) & 0xfff;
    return (s32)(*param_1);
}

// From /src/game/crc.c
/**
 * Get CRC of bytes from addressA to addressB and save to retval.chksum1 and retval.chksum2
 *
 * @param addressA
 * @param addressB
 * @param retval
 * @return * void
 */
void fileGenerateCRC(u8 *addressA, u8 *addressB, save_data *retval)
{
    u8 *byte;
    s32 shift      = 0; // Shift value
    s64 polynormal = 0x8F809F473108B3C1;
    s32 checksum1  = 0; // Final checksum #1
    s32 checksum2  = 0; // Final checksum #2

    for(byte = addressA; byte < addressB; byte++,shift += 7)
    {
        polynormal += *byte << (shift & 0xF) ;
        checksum1 ^= randomGetNextFrom(&polynormal);
    }

    for(byte = addressB - 1; byte >= addressA; byte--,shift += 3)
    {
        polynormal += *byte << (shift & 0xF) ;
        checksum2 ^= randomGetNextFrom(&polynormal);
    }
    retval->chksum1 = checksum1;
    retval->chksum2 = checksum2;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: ./007savefile_checksum <savefile.eep>");
        return 1;
    }

    
    FILE *file = fopen(argv[1], "r+");

    if (!file) {
        perror("Error when opening the file");
        return 1;
    }

    int i;
    save_data cur_save;
    s32 crc[2];
    size_t num;

    fseek(file, 0x20, SEEK_SET);

    for (i = 0; i < 5; i++) {
        num = fread(&cur_save, sizeof(save_data), 1, file);

        if (num != 1) {
            perror("Error when reading file");
            return 1;
        }
        
        fileGenerateCRC(&cur_save.completion_bitflags, 1 + &cur_save, &crc); // do checksum on save data

        fseek(file,  -sizeof(save_data), SEEK_CUR);

        num = fwrite(crc, sizeof(crc), 1, file);

        if (num != 1) {
            perror("Error when writing to file");
            return 1;
        }

        fseek(file, sizeof(save_data) - sizeof(crc), SEEK_CUR);
    }

    fclose(file);
}