#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define HEADER_LENGTH 0x20
#define HASH_LENGTH 0x8
#define SAVE_LENGTH 0x58
#define SAVE_FILE_SIZE 0x200

uint64_t SubHash(uint32_t hi, uint32_t lo);
uint64_t Hash(unsigned char *data);

// struct for game slot 
// first 0x8 bytes is hash 
// remaining 0x58 bytes is save data
// total 0x60 bytes
typedef struct {
    unsigned char hash[HASH_LENGTH];
    unsigned char data[SAVE_LENGTH];
} GameSlot;

/**
 * Takes in a pointer to a game slot
 * @param data: pointer to the 0x20 byte of the save file
 * @returns the hash of the save data
*/
uint64_t Hash(unsigned char *data)
{
    uint32_t seedLo = 0x3108B3C1;
    uint32_t seedHi = 0x8F809F47;
    uint32_t s1 = 0;
    uint64_t resultHi = 0;
    uint64_t resultLo = 0;

    for (size_t i = 0; i < SAVE_LENGTH; i++)
    {
        unsigned char t8 = data[i];
        uint32_t t9 = s1 & 0xF;
        uint32_t t0 = (uint32_t)(t8 << (unsigned char)t9);
        uint32_t t7 = t0 + seedLo;
        uint32_t t6 = t0 >> 31;
        if (t7 < seedLo)
            t6++;
        t6 += seedHi;
        seedHi = t6;
        seedLo = t7;
        uint64_t newSeed = SubHash(seedHi, seedLo);
        s1 += 7;
        resultHi ^= (uint32_t)newSeed;
        seedLo = (uint32_t)newSeed;
        seedHi = (uint32_t)(newSeed >> 32);
    }

    for (int i = SAVE_LENGTH - 1; i >= 0; i--)
    {
        unsigned char t8 = data[i];
        uint32_t t9 = s1 & 0xF;
        uint32_t t0 = (uint32_t)(t8 << (unsigned char)t9);
        uint32_t t7 = t0 + seedLo;
        uint32_t t6 = t0 >> 31;
        if (t7 < seedLo)
            t6++;
        t6 += seedHi;
        seedHi = t6;
        seedLo = t7;
        uint64_t newSeed = SubHash(seedHi, seedLo);
        s1 += 3;
        resultLo ^= (uint32_t)newSeed;
        seedLo = (uint32_t)newSeed;
        seedHi = (uint32_t)(newSeed >> 32);
    }

    return (resultHi << 32) | resultLo;
}

/**
 * Takes in two 32 bit integers
 * @param hi: the higher 32 bits
 * @param lo: the lower 32 bits
 * @returns a 64 bit sub-hash
*/
uint64_t SubHash(uint32_t hi, uint32_t lo)
{
    uint64_t a3 = (uint64_t)hi << 32 | lo;
    uint64_t a2 = a3 << 63;
    uint64_t a1 = a3 << 31;
    a2 = a2 >> 31;
    a1 = a1 >> 32;
    a3 = a3 << 44;
    a2 |= a1;
    a3 = a3 >> 32;
    a2 ^= a3;
    a3 = a2 >> 20;
    a3 &= 0xFFF;
    a3 ^= a2;
    return a3;
}

/**
 * Takes in a pointer to the 0x20 byte of the save file 
 * and fills the GameSlot array with the 5 game slots
 * @param slots: pointer to the slots array
 * @param gameSlot: pointer to the 0x20 byte of the save file
*/
void fillGameSlots(GameSlot *slots, unsigned char *gameSlot) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            slots[i].hash[j] = gameSlot[i * 0x60 + j];
        }
        for (int j = 0; j < 0x58; j++) {
            slots[i].data[j] = gameSlot[i * 0x60 + 8 + j];
        }
    }
}

/**
 * Takes in a pointer to the 0x20 byte of the save file and prints the 5 game slots
 * @param slots: pointer to the 0x20 byte of the save file
*/
void printGameSlots(GameSlot *slots) {
    for (int i = 0; i < 5; i++) {
        printf("Slot %d:\n", i);
        for (int j = 0; j < 8; j++) {
            printf("%02x ", slots[i].hash[j]);
        }
        printf("\n");
        for (int j = 0; j < 0x58; j++) {
            printf("%02x ", slots[i].data[j]);
        }
        printf("\n");
    }
}

/**
 * Takes in a pointer to the 0x20 byte of the save file and prints the 5 hashes
 * @param slots: pointer to the 0x20 byte of the save file
*/
void printHashes(GameSlot *slots) {
    for (int i = 0; i < 5; i++) {
        printf("Slot %d: ", i);
        for (int j = 0; j < 8; j++) {
            printf("%02x ", slots[i].hash[j]);
        }
        printf("\n");
    }
}

/**
 * Takes in a pointer to the 0x20 byte of the save file 
 * prints the 5 hashes and the hash of the save data
 * @param slots: pointer to the 0x20 byte of the save file
*/
void printHashComparison(GameSlot *slots) {
    for (int i = 0; i < 5; i++) {
        printf("Slot %d saved hash: ", i);
        for (int j = 0; j < 8; j++) {
            printf("%02x ", slots[i].hash[j]);
        }
        printf("\n");
        uint64_t hash = Hash(slots[i].data);
        printf("Slot %d function hash: %016llx\n", i, hash);
    }
}

/**
 * Takes in a pointer to the 0x20 byte of the save file and generates the 5 game slots
 * @param slots: pointer to the 0x20 byte of the save file
 * @param byte: byte to fill the save data with
*/
void generateGameSlots(GameSlot *slots, unsigned char byte) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < SAVE_LENGTH; j++) {
            slots[i].data[j] = byte;
        }
        uint64_t hash = Hash(slots[i].data);
        for (int j = 0; j < HASH_LENGTH; j++) {
            slots[i].hash[j] = (hash >> (8 * (7 - j))) & 0xFF;
        }
    }
}


int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: ./007savefile_checksum <savefile.eep>");
        return 1;
    }

    // read in file as byte array, 512 bytes
    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        fprintf(stderr, "Could not open file %s\n", argv[1]);
        return 2;
    }

    unsigned char buffer[SAVE_FILE_SIZE];
    fread(buffer, 1, SAVE_FILE_SIZE, fp);
    fclose(fp);

    // pointer to the 0x20 byte
    unsigned char *gameSlot = buffer + HEADER_LENGTH;

    // create a gameSlot array of 5 and fill in the hash with first 8 bytes, save data with remainder
    GameSlot slots[5];
    fillGameSlots(slots, gameSlot);

    // print out the gameslots, print as hex with spaces, separating the hash and savedata in separate lines
    printGameSlots(slots);

    // print each hash into bytes separated by spaces
    printHashes(slots);

    // print each hash and each hash function result
    printHashComparison(slots);

    // generate new save data and hash for each slot
    generateGameSlots(slots, 1);

    printGameSlots(slots);
    printHashComparison(slots);

    // write new save data to file
    fp = fopen(argv[1], "wb");
    if (fp == NULL) {
        fprintf(stderr, "Could not open file %s\n", argv[1]);
        return 2;
    }

    // write first 0x20 bytes ** could skip this **
    for (int i = 0; i < 0x20; i++) {
        fputc(buffer[i], fp);
    }

    // write each game slot
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            fputc(slots[i].hash[j], fp);
        }
        for (int j = 0; j < 0x58; j++) {
            fputc(slots[i].data[j], fp);
        }
    }

    fclose(fp);

    return 0;
}