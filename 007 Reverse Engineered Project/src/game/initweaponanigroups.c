#include <ultra64.h>

//uncomment when actor is worked on
//#include "chr.h"
extern s32 get_ptr_allocated_block_for_vertices;

void init_weapon_animation_groups_maybe(void) {
    set_vtxallocator(&get_ptr_allocated_block_for_vertices);
    somethingwith_weapon_animation_groups();
}
