#include <ultra64.h>
#include <limits.h>
#include <assets/animationtable_data.h>
#include <random.h>
#include "bondview.h"
#include "chrai.h"
#include "initanitable.h"
#include "lvl.h"
#include "matrixmath.h"
#include "objecthandler.h"
#include "player.h"
#include "bondhead.h"


/**
 * Address 0x80036AD0.
*/
struct init_bond_anim_unk g_BondMoveAnimationSetup[2] = {
    // address 0x80036AD0 = g_BondMoveAnimationSetup + 0
    {PTR_ANIM_bond_eye_walk, 9.5f, 27.0f, 0.0f, 0.0f, 1.5f},
    // address 0x80036AE8 = g_BondMoveAnimationSetup + 24
    {PTR_ANIM_sprinting, 7.5f, 17.0f, 0.0f, 1.5f, 100.0f}
};

/**
 * Address 0x80036B00.
*/
coord3d D_80036B00 = { 0.0f, 0.0f, 0.0f };

/**
 * Address 0x80036B0C.
*/
coord3d D_80036B0C = { 0.0f, 0.0f, 1.0f };

/**
 * Address 0x80036B18.
*/
coord3d D_80036B18 = { 0.0f, 1.0f, 0.0f };

/**
 * Address 0x80036B24.
*/
struct unk_joint_list D_80036B24 = {NULL, 1, 3, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0, 0, 0, 0}, 0};

/**
 * Address 0x80036B64.
*/
coord3d D_80036B64 = { 0.0f, 0.0f, 0.0f };





// forward declarations

void bheadUpdatePos(coord3d *vel);
void bheadUpdateRot(coord3d *lookvel, coord3d *upvel);
void bheadSetdamp(f32 headdamp);

// end forward declarations





void bheadFlipAnimation()
{
    g_CurrentPlayer->field_5BC = !g_CurrentPlayer->field_5BC;
}

void bheadUpdateIdleRoll()
{
    f32 mult = 1.0f / UINT_MAX;

	g_CurrentPlayer->standlook[g_CurrentPlayer->standcnt][0] = ((f32)randomGetNext() * mult - 0.5f) * 0.02f;
	g_CurrentPlayer->standlook[g_CurrentPlayer->standcnt][2] = 1;
	g_CurrentPlayer->standup[g_CurrentPlayer->standcnt][0] = ((f32)randomGetNext() * mult - 0.5f) * 0.02f;
	g_CurrentPlayer->standup[g_CurrentPlayer->standcnt][1] = 1;

	if (g_CurrentPlayer->standcnt)
    {
		g_CurrentPlayer->standlook[g_CurrentPlayer->standcnt][1] = (f32)randomGetNext() * mult * 0.01f;
		g_CurrentPlayer->standup[g_CurrentPlayer->standcnt][2] = (f32)randomGetNext() * mult * -0.01f;
	}
    else
    {
		g_CurrentPlayer->standlook[g_CurrentPlayer->standcnt][1] = (f32)randomGetNext() * mult * -0.01f;
		g_CurrentPlayer->standup[g_CurrentPlayer->standcnt][2] = (f32)randomGetNext() * mult * 0.01f;
	}

	g_CurrentPlayer->standcnt = 1 - g_CurrentPlayer->standcnt;
}

void bheadUpdatePos(coord3d *vel)
{
#if defined(VERSION_EU)
#define CURRENTPLAYERUPDATEHEADPOS_SCALE 0.916599988937f
#else
#define CURRENTPLAYERUPDATEHEADPOS_SCALE 0.93f
#endif
    s32 i;

    if (g_CurrentPlayer->resetheadpos)
    {
        g_CurrentPlayer->headpossum[0] = 0.0f;
        g_CurrentPlayer->headpossum[1] = (vel->f[1] / (1.0f - CURRENTPLAYERUPDATEHEADPOS_SCALE));
        g_CurrentPlayer->headpossum[2] = 0.0f;

        g_CurrentPlayer->resetheadpos = FALSE;
    }

    for (i = 0; i < g_ClockTimer; i++)
    {
        g_CurrentPlayer->headpossum[0] = ((CURRENTPLAYERUPDATEHEADPOS_SCALE * g_CurrentPlayer->headpossum[0]) + vel->f[0]);
        g_CurrentPlayer->headpossum[1] = ((CURRENTPLAYERUPDATEHEADPOS_SCALE * g_CurrentPlayer->headpossum[1]) + vel->f[1]);
        g_CurrentPlayer->headpossum[2] = ((CURRENTPLAYERUPDATEHEADPOS_SCALE * g_CurrentPlayer->headpossum[2]) + vel->f[2]);
    }

    g_CurrentPlayer->headpos[0] = (g_CurrentPlayer->headpossum[0] * (1.0f - CURRENTPLAYERUPDATEHEADPOS_SCALE));
    g_CurrentPlayer->headpos[1] = (g_CurrentPlayer->headpossum[1] * (1.0f - CURRENTPLAYERUPDATEHEADPOS_SCALE));
    g_CurrentPlayer->headpos[2] = (g_CurrentPlayer->headpossum[2] * (1.0f - CURRENTPLAYERUPDATEHEADPOS_SCALE));
#undef CURRENTPLAYERUPDATEHEADPOS_SCALE
}

void bheadUpdateRot(coord3d *lookvel, coord3d *upvel)
{
	s32 i;

	if (g_CurrentPlayer->resetheadrot)
    {
		g_CurrentPlayer->headlooksum[0] = lookvel->f[0] / (1.0f - g_CurrentPlayer->headdamp);
		g_CurrentPlayer->headlooksum[1] = lookvel->f[1] / (1.0f - g_CurrentPlayer->headdamp);
		g_CurrentPlayer->headlooksum[2] = lookvel->f[2] / (1.0f - g_CurrentPlayer->headdamp);
		g_CurrentPlayer->headupsum[0] = upvel->f[0] / (1.0f - g_CurrentPlayer->headdamp);
		g_CurrentPlayer->headupsum[1] = upvel->f[1] / (1.0f - g_CurrentPlayer->headdamp);
		g_CurrentPlayer->headupsum[2] = upvel->f[2] / (1.0f - g_CurrentPlayer->headdamp);

		g_CurrentPlayer->resetheadrot = FALSE;
	}

	for (i = 0; i < g_ClockTimer; i++)
    {
		g_CurrentPlayer->headlooksum[0] = g_CurrentPlayer->headdamp * g_CurrentPlayer->headlooksum[0] + lookvel->f[0];
		g_CurrentPlayer->headlooksum[1] = g_CurrentPlayer->headdamp * g_CurrentPlayer->headlooksum[1] + lookvel->f[1];
		g_CurrentPlayer->headlooksum[2] = g_CurrentPlayer->headdamp * g_CurrentPlayer->headlooksum[2] + lookvel->f[2];
		g_CurrentPlayer->headupsum[0] = g_CurrentPlayer->headdamp * g_CurrentPlayer->headupsum[0] + upvel->f[0];
		g_CurrentPlayer->headupsum[1] = g_CurrentPlayer->headdamp * g_CurrentPlayer->headupsum[1] + upvel->f[1];
		g_CurrentPlayer->headupsum[2] = g_CurrentPlayer->headdamp * g_CurrentPlayer->headupsum[2] + upvel->f[2];
	}

	g_CurrentPlayer->headlook[0] = g_CurrentPlayer->headlooksum[0] * (1.0f - g_CurrentPlayer->headdamp);
	g_CurrentPlayer->headlook[1] = g_CurrentPlayer->headlooksum[1] * (1.0f - g_CurrentPlayer->headdamp);
	g_CurrentPlayer->headlook[2] = g_CurrentPlayer->headlooksum[2] * (1.0f - g_CurrentPlayer->headdamp);
	g_CurrentPlayer->headup[0] = g_CurrentPlayer->headupsum[0] * (1.0f - g_CurrentPlayer->headdamp);
	g_CurrentPlayer->headup[1] = g_CurrentPlayer->headupsum[1] * (1.0f - g_CurrentPlayer->headdamp);
	g_CurrentPlayer->headup[2] = g_CurrentPlayer->headupsum[2] * (1.0f - g_CurrentPlayer->headdamp);
}

void bheadSetdamp(f32 headdamp)
{
	if (headdamp != g_CurrentPlayer->headdamp)
    {
		f32 divisor = 1.0f - headdamp;
		g_CurrentPlayer->headlooksum[0] = (g_CurrentPlayer->headlooksum[0] * (1.0f - g_CurrentPlayer->headdamp)) / divisor;
		g_CurrentPlayer->headlooksum[1] = (g_CurrentPlayer->headlooksum[1] * (1.0f - g_CurrentPlayer->headdamp)) / divisor;
		g_CurrentPlayer->headlooksum[2] = (g_CurrentPlayer->headlooksum[2] * (1.0f - g_CurrentPlayer->headdamp)) / divisor;
		g_CurrentPlayer->headupsum[0] = (g_CurrentPlayer->headupsum[0] * (1.0f - g_CurrentPlayer->headdamp)) / divisor;
		g_CurrentPlayer->headupsum[1] = (g_CurrentPlayer->headupsum[1] * (1.0f - g_CurrentPlayer->headdamp)) / divisor;
		g_CurrentPlayer->headupsum[2] = (g_CurrentPlayer->headupsum[2] * (1.0f - g_CurrentPlayer->headdamp)) / divisor;
		g_CurrentPlayer->headdamp = headdamp;
	}
}

void bheadUpdate(f32 arg0, f32 arg1)
{
    coord3d headpos;
    coord3d lookvel;
    coord3d upvel;
    f32 spC0;
    struct unk_joint_list sp80;
    Mtxf sp40;
    coord3d sp34;
    u32 sp30;

    headpos = D_80036B00;
    lookvel = D_80036B0C;
    upvel = D_80036B18;

    spC0 = modelGetAbsAnimSpeed(&g_CurrentPlayer->model);

    if (g_CurrentPlayer->headanim == 0)
    {
        if (spC0 > 0.7f)
        {
            g_CurrentPlayer->headamplitude = 1.0f;
        }
        else if (spC0 > 0.1f)
        {
            g_CurrentPlayer->headamplitude = (((spC0 - 0.1f) * 0.6f) / 0.59999996f) + 0.4f;
        }
        else
        {
            g_CurrentPlayer->headamplitude = 0.4f;
        }

        g_CurrentPlayer->sideamplitude = g_CurrentPlayer->headamplitude;
    }
    else if (g_CurrentPlayer->headanim == 1)
    {
        g_CurrentPlayer->headamplitude = 0.9f;
        g_CurrentPlayer->sideamplitude = 0.5f;
    }
    else
    {
        g_CurrentPlayer->headamplitude = 1.0f;
        g_CurrentPlayer->sideamplitude = g_CurrentPlayer->headamplitude;
    }

    sp80 = D_80036B24;

    sp34 = D_80036B64;

    sp30 = sub_GAME_7F0701E0();

    g_CurrentPlayer->resetheadtick = 0;

    sub_GAME_7F0701D4(0);
    sub_GAME_7F070AEC(&g_CurrentPlayer->model, g_ClockTimer, 1);
    sub_GAME_7F0701D4((s32) sp30);

    subcalcpos(&g_CurrentPlayer->model);
    matrix_4x4_set_identity(&sp40);

    sp80.unk_matrix = &sp40;
    sp80.mtxlist = &g_CurrentPlayer->bondheadmatrices[0];

    subcalcmatrices(&sp80, &g_CurrentPlayer->model);

    g_CurrentPlayer->headbodyoffset[0] = g_CurrentPlayer->standbodyoffset.x;
    g_CurrentPlayer->headbodyoffset[1] = g_CurrentPlayer->standbodyoffset.y;
    g_CurrentPlayer->headbodyoffset[2] = g_CurrentPlayer->standbodyoffset.z;

    getsuboffset(&g_CurrentPlayer->model, (struct float3 *) &sp34);

    sp34.f[0] -= g_CurrentPlayer->bondheadmatrices[0].m[3][0];
    sp34.f[2] -= g_CurrentPlayer->bondheadmatrices[0].m[3][2];
    
    setsuboffset(&g_CurrentPlayer->model, (coord3d *) &sp34);

    if (spC0 > 0.0f)
    {
        g_CurrentPlayer->bondheadmatrices[0].m[3][0] += arg1;
        g_CurrentPlayer->bondheadmatrices[0].m[3][2] *= arg0;

        if (g_ClockTimer > 0)
        {
            g_CurrentPlayer->bondheadmatrices[0].m[3][0] /= g_GlobalTimerDelta;
            g_CurrentPlayer->bondheadmatrices[0].m[3][2] /= g_GlobalTimerDelta;
        }

        headpos.f[0] = g_CurrentPlayer->bondheadmatrices[0].m[3][0] * g_CurrentPlayer->headamplitude;
        headpos.f[1] = ((g_CurrentPlayer->bondheadmatrices[0].m[3][1] - g_CurrentPlayer->standheight) * g_CurrentPlayer->headamplitude) + g_CurrentPlayer->standheight;
        headpos.f[2] = g_CurrentPlayer->bondheadmatrices[0].m[3][2] * g_CurrentPlayer->headamplitude;

        if (g_CurrentPlayer->headanim >= 0)
        {
            lookvel.f[0] = g_CurrentPlayer->bondheadmatrices[0].m[2][0] * g_CurrentPlayer->sideamplitude;
            lookvel.f[1] = g_CurrentPlayer->bondheadmatrices[0].m[2][1] * g_CurrentPlayer->headamplitude;
            lookvel.f[2] = ((g_CurrentPlayer->bondheadmatrices[0].m[2][2] - 1.0f) * g_CurrentPlayer->headamplitude) + 1.0f;

            upvel.f[0] = g_CurrentPlayer->bondheadmatrices[0].m[1][0] * g_CurrentPlayer->headamplitude;
            upvel.f[1] = ((g_CurrentPlayer->bondheadmatrices[0].m[1][1] - 1.0f) * g_CurrentPlayer->headamplitude) + 1.0f;
            upvel.f[2] = g_CurrentPlayer->bondheadmatrices[0].m[1][2] * g_CurrentPlayer->headamplitude;

            g_CurrentPlayer->headwalkingtime60 += g_ClockTimer;

#if defined(VERSION_EU)
            if (g_CurrentPlayer->headwalkingtime60 >= 0x33)
            {
                bheadSetdamp(0.916599988937f);
            }
            else
            {
                bheadSetdamp(0.987999975681f);
            }
#else
            if (g_CurrentPlayer->headwalkingtime60 >= 0x3D)
            {
                bheadSetdamp(0.93f);
            }
            else
            {
                bheadSetdamp(0.99f);
            }
#endif
        }
        else
        {
            lookvel.f[0] = g_CurrentPlayer->bondheadmatrices[0].m[2][0];
            lookvel.f[1] = g_CurrentPlayer->bondheadmatrices[0].m[2][1];
            lookvel.f[2] = g_CurrentPlayer->bondheadmatrices[0].m[2][2];

            upvel.f[0] = g_CurrentPlayer->bondheadmatrices[0].m[1][0];
            upvel.f[1] = g_CurrentPlayer->bondheadmatrices[0].m[1][1];
            upvel.f[2] = g_CurrentPlayer->bondheadmatrices[0].m[1][2];

            bheadSetdamp(0.85f);
        }
    }
    else
    {
        g_CurrentPlayer->headbodyoffset[0] = g_CurrentPlayer->standbodyoffset.x;
        g_CurrentPlayer->headbodyoffset[1] = g_CurrentPlayer->standbodyoffset.y;
        g_CurrentPlayer->headbodyoffset[2] = g_CurrentPlayer->standbodyoffset.z;

        headpos.f[0] = 0.0f;
        headpos.f[1] = g_CurrentPlayer->standheight;
        headpos.f[2] = 0.0f;

        g_CurrentPlayer->headwalkingtime60 = 0;
#if defined(VERSION_EU)
        bheadSetdamp(0.987999975681f);
#else
        bheadSetdamp(0.99f);
#endif
        g_CurrentPlayer->standfrac += (0.008333334f + (0.025000002f * bondviewGetBondBreathing())) * g_GlobalTimerDelta;

        if (g_CurrentPlayer->standfrac >= 1.0f)
        {
            bheadUpdateIdleRoll();
            g_CurrentPlayer->standfrac -= 1.0f;
        }

        sub_GAME_7F05AE00(
            &g_CurrentPlayer->standlook[g_CurrentPlayer->standcnt][0],
            &g_CurrentPlayer->standlook[1 - g_CurrentPlayer->standcnt][0],
            g_CurrentPlayer->standfrac,
            &lookvel);

        lookvel.f[0] *= (1.0f + (5.0f * bondviewGetBondBreathing()));
        lookvel.f[1] *= (1.0f + (5.0f * bondviewGetBondBreathing()));

        sub_GAME_7F05AE00(
            &g_CurrentPlayer->standup[g_CurrentPlayer->standcnt][0],
            &g_CurrentPlayer->standup[1 - g_CurrentPlayer->standcnt][0],
            g_CurrentPlayer->standfrac,
            &upvel);

        upvel.f[0] *= (1.0f + (5.0f * bondviewGetBondBreathing()));
        upvel.f[2] *= (1.0f + (5.0f * bondviewGetBondBreathing()));
    }

    bheadUpdatePos(&headpos);
    bheadUpdateRot(&lookvel, &upvel);
}



/**
 * Address 0x7F08E8BC.
*/
void bheadAdjustAnimation(f32 speed)
{
    s32 i;
    f32 startframe;
    
    speed *= g_BondMoveAnimationSetup[1].unk0C;

    for (i=0; i<2; i++)
    {
        if (speed <= g_BondMoveAnimationSetup[i].unk14 * g_BondMoveAnimationSetup[i].unk0C)
        {
            if (i != g_CurrentPlayer->headanim)
            {
                startframe = 0.0f;

                if (g_CurrentPlayer->headanim >= 0)
                {
                    startframe = (g_CurrentPlayer->field_5C0 - g_BondMoveAnimationSetup[g_CurrentPlayer->headanim].loopframe)
                        / (g_BondMoveAnimationSetup[g_CurrentPlayer->headanim].endframe - g_BondMoveAnimationSetup[g_CurrentPlayer->headanim].loopframe);

                    startframe = g_BondMoveAnimationSetup[i].loopframe + ((g_BondMoveAnimationSetup[i].endframe - g_BondMoveAnimationSetup[i].loopframe) * startframe);
                }

                modelSetAnimation(
                    &g_CurrentPlayer->model,
                    // match hack: addu address backwards
                    (struct ModelAnimation *) ((s32)g_BondMoveAnimationSetup[i].anim_id + (s32)&ptr_animation_table->data),
                    (s32) g_CurrentPlayer->field_5BC,
                    startframe,
                    0.5f,
                    12.0f);

                modelSetAnimLooping(&g_CurrentPlayer->model, g_BondMoveAnimationSetup[i].loopframe, 0.0f);
                modelSetAnimEndFrame(&g_CurrentPlayer->model, g_BondMoveAnimationSetup[i].endframe);
                modelSetAnimFlipFunction(&g_CurrentPlayer->model, bheadFlipAnimation);
                g_CurrentPlayer->headanim = i;
            }

            speed /= g_BondMoveAnimationSetup[i].unk0C;

            modelSetAnimSpeed(&g_CurrentPlayer->model, speed * 0.5f, 0.0f);
            return;
        }
    }
}





/**
 * Address 0x7F08EA48.
*/
void bheadStartDeathAnimation(struct ModelAnimation *animnum, s32 flip, f32 fstarttime, f32 speed)
{
    modelSetAnimation(&g_CurrentPlayer->model, animnum, flip, fstarttime, speed * 0.5f, 12.0f);
    g_CurrentPlayer->headanim = -1;
}






/**
 * Address 0x7F08EAB8.
*/
void bheadSetSpeed(f32 speed)
{
    modelSetAnimSpeed(&g_CurrentPlayer->model, speed * 0.5f, 0.0f);
}


f32 bheadGetBreathingValue(void)
{
	if (g_CurrentPlayer->headanim >= 0) {
		f32 a = bondviewGetBondBreathing() * 0.012500001f + 0.004166667f;
		f32 b = modelGetAbsAnimSpeed(&g_CurrentPlayer->model);

		if (b > 0) {
			f32 c = b / (g_BondMoveAnimationSetup[g_CurrentPlayer->headanim].endframe - g_BondMoveAnimationSetup[g_CurrentPlayer->headanim].loopframe);

			if (c < a) {
				c = a;
			}

			return c;
		}

		return a;
	}

	return 0;
}

