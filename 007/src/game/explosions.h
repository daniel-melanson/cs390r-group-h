#ifndef _explosions_H_
#define _explosions_H_
#include <ultra64.h>
#include <bondtypes.h>

#define EXPLOSION_BUFFER_LEN 6
#define EXPLOSION_PARTS_LEN 40
#define SMOKE_BUFFER_LEN 20
#define SMOKE_PARTS_LEN 10
#define SCORCH_BUFFER_LEN 20
#define BULLET_IMPACT_BUFFER_LEN 100
#define MAX_FLYING_PARTICLES 200

typedef struct s_smoketype {
    s16 duration;
    s16 rateappear;
    s16 ratedissolve;
    s16 size;
    f32 bg_rotrate;
    u8 r;
    u8 g;
    u8 b;
    //u8 a;
    f32 fg_rotrate;
    s16 propagated_clouds;
    //u16 field_0x16;
} s_smoketype;

typedef struct s_explosiontype {
    f32 hrange;
    f32 vrange;
    f32 hchange;
    f32 vchange;
    f32 explosion_size;
    f32 explosion_range;
    f32 dmg_range;
    u16 duration;
    u16 propagationrate;
    f32 flareanimspeed;
    u16 numshrapnelbits;
    //u16 field_0x26;
    f32 shrapnel_size;
    f32 shrapnel_scatter_dist;
    f32 shrapnel_hvel;
    f32 shrapnel_vvel;
    u8 smoketype;
    u8 sndID;
    //u16 field_0x3a;
    f32 damage;
} s_explosiontype;

typedef struct s_impacttype {
    f32 width;
    f32 height;
    u8 apptype;
    u8 unk1;
    u8 unk2;
} s_impacttype;

struct ExplosionPart
{
    coord3d pos;
    u32 size;
    u32 rot;
    s16 frame;
    u8 bb;
};

struct Explosion {
    PropRecord *prop;
    u32 unk04;
    struct ExplosionPart parts[EXPLOSION_PARTS_LEN];
    u32 unk3C8;
    s8 unk3CC;
    u8 unk3CD;
    u16 unk3CE;
    u32 unk3D0;
    u32 unk3D4;
    u32 unk3D8;
    u32 unk3DC;
};

struct SmokePart
{
    coord3d pos;         /*0x00*/
    f32 size;                   /*0x0c*/
    u32 rot;                    /*0x10*/
    u32 deltarot;               /*0x14*/
    u32 offset1;                /*0x18*/
    u32 offset2;                /*0x1c*/
    u32 alpha;                  /*0x20*/
    u16 count;                  /*0x24*/
};

struct Smoke {
    PropRecord *prop;
    s16 unk04;
    s16 unk06;
    struct SmokePart parts[SMOKE_PARTS_LEN]; /*0x008*/
};

struct Scorch {
    s16 roomid;
    s16 unk02;
    u32 unk04;
    u32 unk08;
    u32 unk0C;

    u32 unk10;
    u32 unk14;
    u32 vertex_list[4];

    u32 unk28;
    u32 unk2C;

    u32 unk30;
    u32 unk34;
    u32 unk38;
    u32 unk3C;

    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;

    u32 unk50;
    u32 unk54;
};

struct BulletImpact {
    s16 unk00;
    s16 unk02;
    u32 unk04;
    u32 unk08;
    u32 unk0C;

    u32 unk10;
    u16 unk14;
    s8 unk16;
    s8 unk17;
    u32 unk18;
    u32 unk1C;

    u32 unk20;
    u16 unk24;
    s8 unk26;
    s8 unk27;
    u32 unk28;
    u32 unk2C;

    u32 unk30;
    u16 unk34;
    s8 unk36;
    s8 unk37;
    u32 unk38;
    u32 unk3C;

    u32 unk40;
    u16 unk44;
    s8 unk46;
    s8 unk47;
    u32 unk48;
    s8 unk4C;
    s8 unk4D;
    s16 unk4E;
};

struct FlyingParticles_unk38 {
    s16 unk00;
    s16 unk02;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0A;
    s8 unk0C;
    s8 unk0D;
    s8 unk0E;
    u8 unk0F;
};

struct FlyingParticles {
    s32 unk00;

    // coord3d?
    f32 x;
    f32 y;
    f32 z;

    // coord3d?
    f32 unk10;
    f32 unk14;
    f32 unk18;

    // coord3d?
    f32 unk1C;
    f32 unk20;
    f32 unk24;

    // coord3d?
    f32 unk28;
    f32 unk2C;
    f32 unk30;

    s32 unk34;

    struct FlyingParticles_unk38 unk38[4];
};

extern f32 D_80040178;
extern char dword_CODE_bss_8007A100[];
extern struct Smoke *ptr_smoke_buf;
extern struct Explosion *ptr_explosion_buf;
extern s32 max_particles;
extern struct FlyingParticles *ptr_flying_particles_buf;
extern struct Scorch *ptr_scorch_buf;
extern struct BulletImpact *ptr_bullet_impact_buf;
extern s32 numExplosionEntries;
extern s32 numSmokeEntries;
extern s32 numParticleEntries;
extern s32 numScorchEntries;
extern s32 numImpactEntries;

#if defined(VERSION_JP) || defined(VERSION_EU)
s32 sub_GAME_7F09C250(s32 arg0, struct coord3d *pos, struct StandTile *stan, s16 arg3, s32 flag4, s32 playernum, u8 *rooms, s32 flag7);
#else
void sub_GAME_7F09C250(s32 arg0, struct coord3d *pos, struct StandTile *stan, s16 arg3, s32 flag4, s32 playernum, u8 *rooms, s32 flag7);
#endif


void sub_GAME_7F09FD3C(void);
Gfx * sub_GAME_7F0A0034(Gfx *arg0);
Gfx * sub_GAME_7F0A1D78(Gfx *arg0);
Gfx *sub_GAME_7F0A0AB4(Gfx *arg0);
Gfx *unk09c250RenderPropExplosion(PropRecord *arg0, Gfx *arg1);
Gfx *unk09c250RenderPropSmoke(PropRecord *arg0, Gfx *arg1);


Gfx *explosionRenderBulletImpactOnProp(Gfx *arg0, PropRecord *arg1, s32 arg2);

#endif
