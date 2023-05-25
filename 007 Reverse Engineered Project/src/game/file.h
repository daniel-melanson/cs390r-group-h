#ifndef _FILE_H_
#define _FILE_H_
#include <ultra64.h>

#include <bondconstants.h>

// unknown/unused struct. Adding so that a definition exists.
//Private Struct, Move to C
struct save_file { s32* data; };

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

// Used by fileValidateSaves
typedef struct smallSave
{
    int chksum1;
    int chksum2;
    u8 unk[24];
} smallSave;

extern save_data saves[6];
extern save_data D_8002C520;
extern save_data D_8002C580;
extern save_data D_8002C5E0;
extern smallSave blankSmallSave;
extern save_data D_8002C660;
extern save_data D_8002C6C0;
extern save_data D_8002C720;
extern save_data D_8002C780;
extern save_data D_8002C7E0;
extern save_data D_8002C840;
extern save_data blank_eeprom;

extern s32 save_selected_bond[];

void set_selected_folder_num(u32 foldernum);
void set_selected_difficulty(DIFFICULTY difficulty);
void set_solo_and_ptr_briefing(LEVELID stage);

f32 get_007_reaction_speed(void);
f32 get_007_health_mod(void);
f32 get_007_damage_mod(void);
f32 get_007_accuracy_mod(void);
void end_of_mission_briefing(void);
void fileLoadSaveSettingsForSelectedFolder(int stage);
void deleteCurrentSelectedFolder(void);
void copyCurrentEEPROMtoStack(void);
s32 getSelectedFolderBond(void);
void set_selected_folder_num(u32 foldernum);
void set_selected_difficulty(DIFFICULTY difficulty);
void set_solo_and_ptr_briefing(LEVELID stage);
void sub_GAME_7F01D61C(struct save_file *savefile);
void set_selected_foldernum_and_copy_demo_eeprom(struct save_file *eeprom);
void store_favorite_weapon_current_player(u32 right,u32 left);

#endif
