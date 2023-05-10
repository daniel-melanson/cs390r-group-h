
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

#define FIRST_CHECKSUM_SIZE 0x20
#define NUM_SAVES 5
// #define FILE_SIZE (FIRST_CHECKSUM_SIZE + NUM_SAVES * sizeof(save_data))
#define FILE_SIZE 512

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
void fileGenerateCRC(u8 *addressA, u8 *addressB, s32 *retval)
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
    retval[0] = checksum1;
    retval[1] = checksum2;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: ./007savefile_checksum <savefile.eep>");
        return 1;
    }

    
    FILE *file = fopen(argv[1], "rb");

    if (!file) {
        perror("Error when opening the file");
        return 1;
    }

    
    u8 data[FILE_SIZE];
    s32 crc[2];

    fread(data, 1, FILE_SIZE, file);

    save_data *saves = (save_data *) (data + FIRST_CHECKSUM_SIZE);

    fclose(file);

    for (int i = 0; i < NUM_SAVES; ++i) {

        fileGenerateCRC(&saves[i].completion_bitflags, (u8 *) (&saves[i+1]), crc); // do checksum on save data

        saves[i].chksum1 = crc[0];
        saves[i].chksum2 = crc[1];
    }

    file = fopen(argv[1], "wb");

    fwrite(data, 1, FILE_SIZE, file);

    fclose(file);
    return 0;
}