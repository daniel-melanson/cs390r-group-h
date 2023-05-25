#include <ultra64.h>
#include "matrixmath.h"

/**
 * x vector plus ((difference to y vector) * scaler).
 */
void sub_GAME_7F05AE00(vec3d *x, vec3d *y, f32 scaler, vec3d *result)
{
    result->x = ((y->x - x->x) * scaler) + x->x;
    result->y = ((y->y - x->y) * scaler) + x->y;
    result->z = ((y->z - x->z) * scaler) + x->z;
}

/**
 * Unused.
 */ 
f32 sub_GAME_7F05AE50(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    f32 cube;
    f32 square;
    f32 total;
    f32 t2;

    square = arg4 * arg4;
    cube   = square * arg4;

    t2     = square - ((arg4 + cube) * 0.5f);
    total  = arg0 * t2;

    t2     = ((1.5f * cube) - (2.5f * square)) + 1.0f;
    total += arg1 * t2;

    t2     = (-1.5f * cube) + (2.0f * square) + (0.5f * arg4);
    total += arg2 * t2;

    t2     = (cube - square) * 0.5f;
    total += arg3 * t2;

    return total;
}

/**
 * Following is cleaned up mips_to_c output.
 * 
 * decomp status:
 * - compiles: yes
 * - stack resize: fail
 * - identical instructions: fail
 * - identical registers: fail
 */
#ifdef NONMATCHING
void sub_GAME_7F05AEFC(vec3d *arg0, vec3d *arg1, vec3d *arg2, vec3d *arg3, f32 arg4, vec3d *result)
{
    f32 square;
    f32 cube;
    f32 temp_f8;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;

    square = arg4 * arg4;
    cube   = square * arg4;

    temp_f8  = 0.5f * (cube - square);
    temp_f14 = square - ((arg4 + cube) * 0.5f);
    temp_f16 = 1.0f + (1.5f * cube) - (2.5f * square);
    temp_f18 = (-1.5f * cube) + (0.5f * arg4) + (2.0f * square);

    result->f[0] = (temp_f8 * arg3->f[0]) + ((temp_f14 * arg0->f[0]) + (temp_f16 * arg1->f[0]) + (temp_f18 * arg2->f[0]));
    result->f[1] = (temp_f8 * arg3->f[1]) + ((temp_f14 * arg0->f[1]) + (temp_f16 * arg1->f[1]) + (temp_f18 * arg2->f[1]));
    result->f[2] = (temp_f8 * arg3->f[2]) + ((temp_f14 * arg0->f[2]) + (temp_f16 * arg1->f[2]) + (temp_f18 * arg2->f[2]));
}
#else
GLOBAL_ASM(
.text
glabel sub_GAME_7F05AEFC
/* 08FA2C 7F05AEFC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 08FA30 7F05AF00 C7AC0038 */  lwc1  $f12, 0x38($sp)
/* 08FA34 7F05AF04 3C013F00 */  li    $at, 0x3F000000 # 0.500000
/* 08FA38 7F05AF08 44813000 */  mtc1  $at, $f6
/* 08FA3C 7F05AF0C 460C6002 */  mul.s $f0, $f12, $f12
/* 08FA40 7F05AF10 8FAE003C */  lw    $t6, 0x3c($sp)
/* 08FA44 7F05AF14 460C0082 */  mul.s $f2, $f0, $f12
/* 08FA48 7F05AF18 46001101 */  sub.s $f4, $f2, $f0
/* 08FA4C 7F05AF1C 46026280 */  add.s $f10, $f12, $f2
/* 08FA50 7F05AF20 46062202 */  mul.s $f8, $f4, $f6
/* 08FA54 7F05AF24 44812000 */  mtc1  $at, $f4
/* 08FA58 7F05AF28 3C013FC0 */  li    $at, 0x3FC00000 # 1.500000
/* 08FA5C 7F05AF2C 46045182 */  mul.s $f6, $f10, $f4
/* 08FA60 7F05AF30 44815000 */  mtc1  $at, $f10
/* 08FA64 7F05AF34 3C014020 */  li    $at, 0x40200000 # 2.500000
/* 08FA68 7F05AF38 E7A80000 */  swc1  $f8, ($sp)
/* 08FA6C 7F05AF3C 46025102 */  mul.s $f4, $f10, $f2
/* 08FA70 7F05AF40 46060381 */  sub.s $f14, $f0, $f6
/* 08FA74 7F05AF44 44813000 */  mtc1  $at, $f6
/* 08FA78 7F05AF48 3C013F80 */  li    $at, 0x3F800000 # 1.000000
/* 08FA7C 7F05AF4C 46003282 */  mul.s $f10, $f6, $f0
/* 08FA80 7F05AF50 460A2181 */  sub.s $f6, $f4, $f10
/* 08FA84 7F05AF54 44812000 */  mtc1  $at, $f4
/* 08FA88 7F05AF58 3C01BFC0 */  li    $at, 0xBFC00000 # -1.500000
/* 08FA8C 7F05AF5C 44815000 */  mtc1  $at, $f10
/* 08FA90 7F05AF60 46043400 */  add.s $f16, $f6, $f4
/* 08FA94 7F05AF64 3C013F00 */  li    $at, 0x3F000000 # 0.500000
/* 08FA98 7F05AF68 46025182 */  mul.s $f6, $f10, $f2
/* 08FA9C 7F05AF6C 46000100 */  add.s $f4, $f0, $f0
/* 08FAA0 7F05AF70 46043280 */  add.s $f10, $f6, $f4
/* 08FAA4 7F05AF74 44813000 */  mtc1  $at, $f6
/* 08FAA8 7F05AF78 00000000 */  nop   
/* 08FAAC 7F05AF7C 460C3102 */  mul.s $f4, $f6, $f12
/* 08FAB0 7F05AF80 C4E60000 */  lwc1  $f6, ($a3)
/* 08FAB4 7F05AF84 46045480 */  add.s $f18, $f10, $f4
/* 08FAB8 7F05AF88 46083282 */  mul.s $f10, $f6, $f8
/* 08FABC 7F05AF8C C4840000 */  lwc1  $f4, ($a0)
/* 08FAC0 7F05AF90 46047182 */  mul.s $f6, $f14, $f4
/* 08FAC4 7F05AF94 C4A40000 */  lwc1  $f4, ($a1)
/* 08FAC8 7F05AF98 46048102 */  mul.s $f4, $f16, $f4
/* 08FACC 7F05AF9C 46043180 */  add.s $f6, $f6, $f4
/* 08FAD0 7F05AFA0 C4C40000 */  lwc1  $f4, ($a2)
/* 08FAD4 7F05AFA4 46049102 */  mul.s $f4, $f18, $f4
/* 08FAD8 7F05AFA8 46043180 */  add.s $f6, $f6, $f4
/* 08FADC 7F05AFAC 46065100 */  add.s $f4, $f10, $f6
/* 08FAE0 7F05AFB0 E5C40000 */  swc1  $f4, ($t6)
/* 08FAE4 7F05AFB4 C4EA0004 */  lwc1  $f10, 4($a3)
/* 08FAE8 7F05AFB8 C4840004 */  lwc1  $f4, 4($a0)
/* 08FAEC 7F05AFBC 46085182 */  mul.s $f6, $f10, $f8
/* 08FAF0 7F05AFC0 00000000 */  nop   
/* 08FAF4 7F05AFC4 46047282 */  mul.s $f10, $f14, $f4
/* 08FAF8 7F05AFC8 C4A40004 */  lwc1  $f4, 4($a1)
/* 08FAFC 7F05AFCC 46048102 */  mul.s $f4, $f16, $f4
/* 08FB00 7F05AFD0 46045280 */  add.s $f10, $f10, $f4
/* 08FB04 7F05AFD4 C4C40004 */  lwc1  $f4, 4($a2)
/* 08FB08 7F05AFD8 46049102 */  mul.s $f4, $f18, $f4
/* 08FB0C 7F05AFDC 46045280 */  add.s $f10, $f10, $f4
/* 08FB10 7F05AFE0 460A3100 */  add.s $f4, $f6, $f10
/* 08FB14 7F05AFE4 E5C40004 */  swc1  $f4, 4($t6)
/* 08FB18 7F05AFE8 C4E60008 */  lwc1  $f6, 8($a3)
/* 08FB1C 7F05AFEC C4840008 */  lwc1  $f4, 8($a0)
/* 08FB20 7F05AFF0 46083282 */  mul.s $f10, $f6, $f8
/* 08FB24 7F05AFF4 C4A80008 */  lwc1  $f8, 8($a1)
/* 08FB28 7F05AFF8 46047182 */  mul.s $f6, $f14, $f4
/* 08FB2C 7F05AFFC 00000000 */  nop   
/* 08FB30 7F05B000 46088102 */  mul.s $f4, $f16, $f8
/* 08FB34 7F05B004 46043200 */  add.s $f8, $f6, $f4
/* 08FB38 7F05B008 C4C60008 */  lwc1  $f6, 8($a2)
/* 08FB3C 7F05B00C 27BD0028 */  addiu $sp, $sp, 0x28
/* 08FB40 7F05B010 46069102 */  mul.s $f4, $f18, $f6
/* 08FB44 7F05B014 46044180 */  add.s $f6, $f8, $f4
/* 08FB48 7F05B018 46065200 */  add.s $f8, $f10, $f6
/* 08FB4C 7F05B01C 03E00008 */  jr    $ra
/* 08FB50 7F05B020 E5C80008 */   swc1  $f8, 8($t6)
)
#endif

/**
 * Following is cleaned up mips_to_c output.
 * 
 * decomp status:
 * - compiles: yes
 * - stack resize: fail
 * - identical instructions: fail
 * - identical registers: fail
 */
#ifdef NONMATCHING
void sub_GAME_7F05B024(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, f32 *result)
{
    f32 square;
    f32 cube;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f6;
    f32 temp_f8;

    square = arg4 * arg4;
    cube = square * arg4;
    temp_f6 = (cube - square) * arg5;
    temp_f16 = ((2.0f * square) - (arg4 + cube)) * arg5;
    temp_f18 = ((2.0f - arg5) * cube) + (square * (arg5 - 3.0f)) + 1.0f;
    temp_f8 = ((arg5 - 2.0f) * cube) + (square * (3.0f - (2.0f * arg5))) + (arg4 * arg5);

    result[0] = (arg3[0] * temp_f6) + ((temp_f16 * arg0[0]) + (temp_f18 * arg1[0]) + (temp_f8 * arg2[0]));
    result[1] = (arg3[1] * temp_f6) + ((temp_f16 * arg0[1]) + (temp_f18 * arg1[1]) + (temp_f8 * arg2[1]));
    result[2] = (arg3[2] * temp_f6) + ((temp_f16 * arg0[2]) + (temp_f18 * arg1[2]) + (temp_f8 * arg2[2]));
}
#else
GLOBAL_ASM(
.text
glabel sub_GAME_7F05B024
/* 08FB54 7F05B024 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 08FB58 7F05B028 C7AC0038 */  lwc1  $f12, 0x38($sp)
/* 08FB5C 7F05B02C C7AE003C */  lwc1  $f14, 0x3c($sp)
/* 08FB60 7F05B030 3C014000 */  li    $at, 0x40000000 # 2.000000
/* 08FB64 7F05B034 460C6002 */  mul.s $f0, $f12, $f12
/* 08FB68 7F05B038 8FAE0040 */  lw    $t6, 0x40($sp)
/* 08FB6C 7F05B03C 460C0082 */  mul.s $f2, $f0, $f12
/* 08FB70 7F05B040 46000200 */  add.s $f8, $f0, $f0
/* 08FB74 7F05B044 46001101 */  sub.s $f4, $f2, $f0
/* 08FB78 7F05B048 46026280 */  add.s $f10, $f12, $f2
/* 08FB7C 7F05B04C 460E2182 */  mul.s $f6, $f4, $f14
/* 08FB80 7F05B050 460A4101 */  sub.s $f4, $f8, $f10
/* 08FB84 7F05B054 44814000 */  mtc1  $at, $f8
/* 08FB88 7F05B058 3C014040 */  li    $at, 0x40400000 # 3.000000
/* 08FB8C 7F05B05C E7A60000 */  swc1  $f6, ($sp)
/* 08FB90 7F05B060 460E4281 */  sub.s $f10, $f8, $f14
/* 08FB94 7F05B064 460E2402 */  mul.s $f16, $f4, $f14
/* 08FB98 7F05B068 44814000 */  mtc1  $at, $f8
/* 08FB9C 7F05B06C 3C013F80 */  li    $at, 0x3F800000 # 1.000000
/* 08FBA0 7F05B070 46025102 */  mul.s $f4, $f10, $f2
/* 08FBA4 7F05B074 46087281 */  sub.s $f10, $f14, $f8
/* 08FBA8 7F05B078 460A0202 */  mul.s $f8, $f0, $f10
/* 08FBAC 7F05B07C 46082280 */  add.s $f10, $f4, $f8
/* 08FBB0 7F05B080 44812000 */  mtc1  $at, $f4
/* 08FBB4 7F05B084 3C014040 */  li    $at, 0x40400000 # 3.000000
/* 08FBB8 7F05B088 44814000 */  mtc1  $at, $f8
/* 08FBBC 7F05B08C 46045480 */  add.s $f18, $f10, $f4
/* 08FBC0 7F05B090 3C014000 */  li    $at, 0x40000000 # 2.000000
/* 08FBC4 7F05B094 460E7280 */  add.s $f10, $f14, $f14
/* 08FBC8 7F05B098 460A4101 */  sub.s $f4, $f8, $f10
/* 08FBCC 7F05B09C 44815000 */  mtc1  $at, $f10
/* 08FBD0 7F05B0A0 46040202 */  mul.s $f8, $f0, $f4
/* 08FBD4 7F05B0A4 460A7101 */  sub.s $f4, $f14, $f10
/* 08FBD8 7F05B0A8 46022282 */  mul.s $f10, $f4, $f2
/* 08FBDC 7F05B0AC 46085100 */  add.s $f4, $f10, $f8
/* 08FBE0 7F05B0B0 460E6282 */  mul.s $f10, $f12, $f14
/* 08FBE4 7F05B0B4 460A2200 */  add.s $f8, $f4, $f10
/* 08FBE8 7F05B0B8 E7A80008 */  swc1  $f8, 8($sp)
/* 08FBEC 7F05B0BC C4840000 */  lwc1  $f4, ($a0)
/* 08FBF0 7F05B0C0 46048282 */  mul.s $f10, $f16, $f4
/* 08FBF4 7F05B0C4 C4A40000 */  lwc1  $f4, ($a1)
/* 08FBF8 7F05B0C8 46049102 */  mul.s $f4, $f18, $f4
/* 08FBFC 7F05B0CC 46045280 */  add.s $f10, $f10, $f4
/* 08FC00 7F05B0D0 C4C40000 */  lwc1  $f4, ($a2)
/* 08FC04 7F05B0D4 46044102 */  mul.s $f4, $f8, $f4
/* 08FC08 7F05B0D8 46045280 */  add.s $f10, $f10, $f4
/* 08FC0C 7F05B0DC C4E40000 */  lwc1  $f4, ($a3)
/* 08FC10 7F05B0E0 46062102 */  mul.s $f4, $f4, $f6
/* 08FC14 7F05B0E4 460A2100 */  add.s $f4, $f4, $f10
/* 08FC18 7F05B0E8 E5C40000 */  swc1  $f4, ($t6)
/* 08FC1C 7F05B0EC C48A0004 */  lwc1  $f10, 4($a0)
/* 08FC20 7F05B0F0 460A8102 */  mul.s $f4, $f16, $f10
/* 08FC24 7F05B0F4 C4AA0004 */  lwc1  $f10, 4($a1)
/* 08FC28 7F05B0F8 460A9282 */  mul.s $f10, $f18, $f10
/* 08FC2C 7F05B0FC 460A2100 */  add.s $f4, $f4, $f10
/* 08FC30 7F05B100 C4CA0004 */  lwc1  $f10, 4($a2)
/* 08FC34 7F05B104 460A4282 */  mul.s $f10, $f8, $f10
/* 08FC38 7F05B108 460A2100 */  add.s $f4, $f4, $f10
/* 08FC3C 7F05B10C C4EA0004 */  lwc1  $f10, 4($a3)
/* 08FC40 7F05B110 46065282 */  mul.s $f10, $f10, $f6
/* 08FC44 7F05B114 46045280 */  add.s $f10, $f10, $f4
/* 08FC48 7F05B118 E5CA0004 */  swc1  $f10, 4($t6)
/* 08FC4C 7F05B11C C4840008 */  lwc1  $f4, 8($a0)
/* 08FC50 7F05B120 46048282 */  mul.s $f10, $f16, $f4
/* 08FC54 7F05B124 C4A40008 */  lwc1  $f4, 8($a1)
/* 08FC58 7F05B128 46049102 */  mul.s $f4, $f18, $f4
/* 08FC5C 7F05B12C 46045280 */  add.s $f10, $f10, $f4
/* 08FC60 7F05B130 C4C40008 */  lwc1  $f4, 8($a2)
/* 08FC64 7F05B134 46044202 */  mul.s $f8, $f8, $f4
/* 08FC68 7F05B138 46085100 */  add.s $f4, $f10, $f8
/* 08FC6C 7F05B13C C4EA0008 */  lwc1  $f10, 8($a3)
/* 08FC70 7F05B140 27BD0028 */  addiu $sp, $sp, 0x28
/* 08FC74 7F05B144 46065202 */  mul.s $f8, $f10, $f6
/* 08FC78 7F05B148 46044280 */  add.s $f10, $f8, $f4
/* 08FC7C 7F05B14C 03E00008 */  jr    $ra
/* 08FC80 7F05B150 E5CA0008 */   swc1  $f10, 8($t6)
)
#endif

/**
 * Unused.
 */ 
f32 sub_GAME_7F05B154(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    /*
    Quick substition (so this may be wrong), but let x=arg4. Then
    return
    x^3 * (arg3 + arg2 - 2*arg1 + 2*arg0) + x^2 * (-arg3 - 2*arg2 + 3*arg1 - 3*arg0) + x^1 * (arg2) + x^0 * (arg0)
    */
    f32 cube;
    f32 temp_f18;
    f32 square;

    square = arg4 * arg4;
    cube = square * arg4;
    temp_f18 = ((2.0f * cube) - (3.0f * square)) + 1.0f;
    return (arg0 * temp_f18) + (arg1 * (1.0f - temp_f18)) + (arg2 * ((cube - (2.0f * square)) + arg4)) + (arg3 * (cube - square));
}

