#ifndef _FILE2_H_
#define _FILE2_H_
#include <ultra64.h>

#include <bondconstants.h>
#include <bondtypes.h>
#include "file.h"

#define RAMROM_FOLDERNUM 0x64

/* EEPROM masks for in-game settings */
#define OPTION_INVERTLOOK    0x0001
#define OPTION_AUTOAIM       0x0002
#define OPTION_AIMCONTROL    0x0004
#define OPTION_SIGHTONSCREEN 0x0008
#define OPTION_LOOKAHEAD     0x0010
#define OPTION_DISPLAYAMMO   0x0020
#define OPTION_SCREENWIDE    0x0040
#define OPTION_SCREENRATIO   0x0080
#define OPTION_CONTROLTYPE   0x0700
#define OPTION_SCREENCINEMA  0x0800

#define DEFAULT_OPTIONS (OPTION_AUTOAIM | OPTION_SIGHTONSCREEN | OPTION_LOOKAHEAD | OPTION_DISPLAYAMMO)


u8 fileGetBondForFolder(u32 folder);
void fileValidateSaves(void);
bool fileGetIsCheatUnlocked(save_data *save, s32 cheat);
STAGESTATUS fileIsStageUnlockedAtDifficulty(s32 foldernum, LEVEL_SOLO_SEQUENCE stage, DIFFICULTY difficulty);
void fileUnlockStageInFolderAtDifficulty(s32 foldernum, LEVEL_SOLO_SEQUENCE stage, DIFFICULTY difficulty, s32 newtime);
void sub_GAME_7F01E760(s32 foldernum, s32 cheat);
void fileLoadSettingsForFolder(u32 folder);

#endif
