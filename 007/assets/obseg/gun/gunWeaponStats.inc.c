//as this file is included c, not standalone object, save the parent: gun.c to rebuild the object
#ifdef BUGFIX_R0
#define SCALEVAL1 0.80000001
#define SCALEVAL_KNIFE 0.80000001
#define SCALEVAL_SKORPION 0.80000001
#define SCALEVAL_AK47 0.80000001
#define SCALEVAL_UZI 0.80000001
#define SCALEVAL_P90 0.80000001
#define SCALEVAL_RUGER 0.80000001
#define SCALEVAL_LAUNCHER 0.80000001
#else
#ifdef BUGFIX_R2

#define SCALEVAL1 0.881200015545f
#define SCALEVAL_KNIFE 0.82279998064f
#define SCALEVAL_SKORPION 0.869499981403f
#define SCALEVAL_AK47 0.893000006676f
#define SCALEVAL_UZI 0.857800006866f
#define SCALEVAL_P90 0.846099972725
#define SCALEVAL_RUGER 0.834399998188
#define SCALEVAL_LAUNCHER 0.904799997807

#else
#ifdef BUGFIX_R1
#define SCALEVAL1 0.8812
#define SCALEVAL_KNIFE 0.8228
#define SCALEVAL_SKORPION 0.8695
#define SCALEVAL_AK47 0.893
#define SCALEVAL_UZI 0.8578
#define SCALEVAL_P90 0.8461
#define SCALEVAL_RUGER 0.8344
#define SCALEVAL_LAUNCHER 0.9048
#endif
#endif
#endif
//D:80032494
WeaponStats default_weaponstats = {
	1.0, 0.0, 0.0, 0.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 4.0, 0.0, 0x110
};
//D:80032504
#include <assets/obseg/gun/fist/gunWeaponStat.inc.c>

//D:80032574
#include <assets/obseg/gun/knife/gunWeaponStat.inc.c>

//D:800325E4
WeaponStats throwknife_stats = {
	1.0, 14.0, -24.799999, -34.0, 3.0, 3.0, 8.5, 0xA, 1, 0xFF, 0x06, 1, 0, 0, NULL, 3.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,2.0, 4.0, 1.0, 0x560D83
};

//D:80032654
WeaponStats wppk_stats = {
	1.0, 11.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 1, 7, 0xFF, 0x10, 1, 0, 0x6B, &cartridge_header, 1.0, 1.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0x4080300, 3.0, 10.0, 29.999998, 1.0, 12.0, 2.0, 2.0, 4.0, 0.0, 0x170FB9
};
//D:800326C4
WeaponStats wppksil_stats = {
	1.0, 11.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 1, 7, 0xFF, 0x10, 1, 0, 0x2E, &cartridge_header, 1.0, 3.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0x4080300, 1.5, 5.0, 29.999998, 0.0, 5.0, 1.0, 2.0, 4.0, 0.0, 0x170FB9
};
//D:80032734
WeaponStats tt33_stats = {
	1.0, 11.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 1, 8, 0xFF, 0x10, 1, 0, 0x70, &cartridge_header, 1.0, 6.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0x4080300, 5.0, 10.0, 59.999996, 2.0, 16.0, 3.0, 2.0, 4.0, 0.0, 0x170FB9
};

#if defined(VERSION_EU)
WeaponStats skorpion_stats = {
	2.0, 11.5, -25.0, -27.5, 3.0, 5.0, 10.0, 1, 0x14, 0x03, 0x00, 1, 0x9, 0x6A, &cartridge_header, 0.60000002, 15.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 6, 0.0, 0.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x170B79
};
#else
//D:800327A4
WeaponStats skorpion_stats = {
	2.0, 11.5, -25.0, -27.5, 3.0, 5.0, 10.0, 1, 0x14, 0x03, 0x00, 1, 0xB, 0x6A, &cartridge_header, 0.60000002, 15.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 6, 0.0, 0.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x170B79
};
#endif

#if defined(VERSION_EU)
WeaponStats ak47_stats = {
	2.0, 11.0, -19.0, -16.0, 3.0, 3.0, 8.5, 3, 0x1E, 0x03, 0x00, 1, 3, 0x6D, &cartrifle_header, 1.0, 10.0, 30.0, SCALEVAL_AK47, 0.91000003, 1.0, 0x40C0006,4.5, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 3.0, 0x171A7C
};
#else
//D:80032814
WeaponStats ak47_stats = {
	2.0, 11.0, -19.0, -16.0, 3.0, 3.0, 8.5, 3, 0x1E, 0x03, 0x00, 1, 4, 0x6D, &cartrifle_header, 1.0, 10.0, 30.0, SCALEVAL_AK47, 0.91000003, 1.0, 0x40C0006,4.5, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 3.0, 0x171A7C
};
#endif

#if defined(VERSION_EU)
WeaponStats uzi_stats = {
	3.0, 11.0, -24.5, -37.0, 3.0, 8.0, 15.0, 1, 0x20, 0x02, 0x00, 1, 3, 0x6E, &cartridge_header, 1.0, 9.0, 0.0, SCALEVAL_UZI, 0.88, 1.0, 0x6120006, 4.0, 3.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x171B79
};
#else
//D:80032884
WeaponStats uzi_stats = {
	3.0, 11.0, -24.5, -37.0, 3.0, 8.0, 15.0, 1, 0x20, 0x02, 0x00, 1, 4, 0x6E, &cartridge_header, 1.0, 9.0, 0.0, SCALEVAL_UZI, 0.88, 1.0, 0x6120006, 4.0, 3.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x171B79
};
#endif

#if defined(VERSION_EU)
WeaponStats mp5k_stats = {
	2.0, 11.0, -26.4, -35.0, 3.0, 8.0, 15.0, 1, 0x1E, 0x03, 0x00, 1, 3, 0x75, &cartridge_header, 1.0, 7.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x6120006, 4.0, 3.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x171A79
};
#else
//D:800328F4
WeaponStats mp5k_stats = {
	2.0, 11.0, -26.4, -35.0, 3.0, 8.0, 15.0, 1, 0x1E, 0x03, 0x00, 1, 4, 0x75, &cartridge_header, 1.0, 7.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x6120006, 4.0, 3.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x171A79
};
#endif

#if defined(VERSION_EU)
WeaponStats mp5ksil_stats = {
	2.0, 11.0, -26.4, -35.0, 3.0, 8.0, 15.0, 1, 0x1E, 0x03, 0x00, 1, 3, 0x2E, &cartridge_header, 1.0, 9.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x6120006, 3.5, 2.0, 0.0, 0.0, 7.0, 1.2, 2.0, 4.0, 0.0, 0x171A79
};
#else
//D:80032964
WeaponStats mp5ksil_stats = {
	2.0, 11.0, -26.4, -35.0, 3.0, 8.0, 15.0, 1, 0x1E, 0x03, 0x00, 1, 4, 0x2E, &cartridge_header, 1.0, 9.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x6120006, 3.5, 2.0, 0.0, 0.0, 7.0, 1.2, 2.0, 4.0, 0.0, 0x171A79
};
#endif

#if defined(VERSION_EU)
WeaponStats spectre_stats = {
	2.0, 11.0, -21.9, -35.0, 3.0, 8.0, 15.0, 1, 0x32, 0x03, 0x00, 1, 3, 0x6D, &cartridge_header, 1.4, 12.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x40C0006, 4.5, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x171A79
};
#else
//D:800329D4
WeaponStats spectre_stats = {
	2.0, 11.0, -21.9, -35.0, 3.0, 8.0, 15.0, 1, 0x32, 0x03, 0x00, 1, 4, 0x6D, &cartridge_header, 1.4, 12.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x40C0006, 4.5, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x171A79
};
#endif

#if defined(VERSION_EU)
WeaponStats m16_stats = {
	6.0, 11.0, -19.200001, -21.5, 3.0, 3.0, 8.5, 3, 0x1E, 0x02, 0x00, 2, 4, 0x71, &cartblue_header, 1.4, 6.0, 20.0, SCALEVAL_AK47, 0.91000003, 0.5, 0x6120208, 5.0, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 4.0, 0x171A7C
};
#else
//D:80032A44
WeaponStats m16_stats = {
	6.0, 11.0, -19.200001, -21.5, 3.0, 3.0, 8.5, 3, 0x1E, 0x02, 0x00, 2, 5, 0x71, &cartblue_header, 1.4, 6.0, 20.0, SCALEVAL_AK47, 0.91000003, 0.5, 0x6120208, 5.0, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 4.0, 0x171A7C
};
#endif

//D:80032AB4
WeaponStats fnp90_stats = {
	4.0, 12.5, -25.299999, -32.5, 3.0, 8.0, 15.0, 1, 0x50, 0x02, 0x00, 3, 2, 0xFD, &cartridge_header, 1.8, 6.0, 0.0, SCALEVAL_P90, 0.87, 1.0, 0x4080003, 3.5, 2.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 4.0, 0x171A78
};
//D:80032B24
WeaponStats shotgun_stats = {
	4.0, 11.0, -20.6, -19.5, 3.0, 3.0, 8.5, 4, 5, 0xFF, 0x0A, 1, 0, 0x79, &cartshell_header, 0.40000001, 20.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0x812080C, 9.0, 10.0, 0.0, 2.0, 25.0, 4.0, 2.0, 4.0, 5.0, 0x170AF9
};

//D:80032B94
WeaponStats autoshot_stats = {
	4.0, 12.0, -24.1, -19.0, 3.0, 3.0, 8.5, 4, 5, 0xFF, 0x0A, 1, 0, 0x74, NULL, 0.60000002, 16.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0x812080C, 4.5, 3.0, 0.0, 2.0, 20.0, 3.0, 2.0, 4.0, 5.0, 0x170AF9
};

//D:80032C04
WeaponStats sniperrifle_stats = {
	6.0, 11.0, -20.700001, -31.5, 3.0, 3.0, 8.5, 3, 8, 0xFF, 0x10, 1, 0, 0x2E, &cartblue_header, 1.0, 0.0, 15.0, SCALEVAL_AK47, 0.91000003, 0.25, 0, 0.0, 0.0, 0.0, 0.0, 7.0, 1.2, 2.0, 4.0, 0.0, 0x178A70
};

//D:80032C74
WeaponStats ruger_stats = {
	2.0, 12.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 0xC, 6, 0xFF, 0x14, 0xA, 0, 0x6F, NULL, 2.0, 0.0, 0.0, SCALEVAL_RUGER, 0.86000001, 1.0, 0x81000FF, 12.0, 35.0, 0.0, 2.0, 20.0, 3.0, 2.0, 4.0, 6.0, 0x170FB9
};
//D:80032CE4
WeaponStats goldengun_stats = {
	1.0, 11.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 0xD, 1, 0xFF, 0x00, 1, 0, 0x75, NULL, 100.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0x40800FF, 5.0, 10.0, 0.0, 1.0, 9.0, 1.5, 2.0, 4.0, 0.0, 0x170F99
};

//D:80032D54
WeaponStats silverwppk_stats = {
	1.0, 11.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 1, 7, 0xFF, 0x10, 0xA, 0, 0x6B, &cartridge_header, 2.0, 1.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0x4080300, 3.0, 10.0, 29.999998, 1.0, 12.0, 2.0, 2.0, 4.0, 0.0, 0x170FB9
};
//D:80032DC4
WeaponStats goldwppk_stats = {
	1.0, 11.0, -20.799999, -33.5, 3.0, 3.0, 8.5, 1, 7, 0xFF, 0x10, 1, 0, 0x6B, &cartridge_header, 100.0, 1.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0x4080300,3.0, 10.0, 29.999998, 1.0, 12.0, 2.0, 2.0, 4.0, 0.0, 0x170FB9
};

//D:80032E34
WeaponStats laser_stats = {
	1.0, 11.0, -19.5, -28.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0x06, 2, 0, 0xE4, NULL, 2.0, 0.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0x6000606, 0.0, 0.0, 0.0, 2.0, 16.0, 2.0, 2.0, 4.0, 2.0, 0x170B99
};
//D:80032EA4
WeaponStats watchlaser_stats = {
	1.0, -2.0, -21.5, -19.0, 3.0, 3.0, 8.5, 0x18, 0x3E8, 0xFF, 0x00, 1, 0, 0, NULL, 2.0, 0.0, 0.0, SCALEVAL_SKORPION, 0.88999999, 1.0, 0xFF, 0.0, 0.0, 0.0, 1.0, 4.0, 0.2, 1.0, 4.0, 0.0, 0x600F91
};
//D:80032F14
WeaponStats grenadelaunch_stats = {
	1.0, 9.5, -18.0, -18.5, 3.0, 3.0, 8.5, 0xB, 6, 0xFF, 0x14, 1, 0, 0xC, NULL, 1.0, 0.0, 0.0, SCALEVAL_LAUNCHER, 0.92000002, 1.0, 0x81000FF, 10.5, 15.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0x120AF1
};
//D:80032F84
WeaponStats rocketlaunch_stats = {
	1.0, 10.5, -22.200001, -14.5, 3.0, 3.0, 8.5, 6, 1, 0xFF, 0x14, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_LAUNCHER, 0.92000002, 0.5, 0xFF, 0.0, 0.0, 0.0, 2.0, 25.0, 10.0,2.0, 4.0, 0.0, 0x120FF1
};
//D:80032FF4
WeaponStats grenade_stats = {
	1.0, 11.0, -41.799999, -33.0, 3.0, 3.0, 8.5, 5, 1, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0, 4.0, 0.0, 0x422982
};
//D:80033064
WeaponStats timedmine_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 9, 1, 0xFF, 0x06, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0, 4.0,0.0, 0x422D82
};
//D:800330D4
WeaponStats proximitymine_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 8, 1, 0xFF, 0x06, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0, 4.0,0.0, 0x422D82
};
//D:80033144
WeaponStats remotemine_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 7, 1, 0xFF, 0x06, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0, 4.0,0.0, 0x422D82
};
//D:800331B4
WeaponStats trigger_stats = {
	1.0, -2.0, -21.5, -19.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0xFF, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0,0.0, 0x890
};
//D:80033224
WeaponStats taser_stats = {
	1.0, 16.0, -16.700001, -22.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0x00, 1, 0, 0x64, NULL, 1.0, 0.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0xFF, 0.0, 0.0, 0.0, 2.0, 10.0, 2.0, 2.0, 4.0, 0.0, 0x620F70
};
//D:80033294
WeaponStats tank_stats = {
	1.0, 8.0, -19.200001, -11.5, 3.0, 3.0, 8.5, 0x1C, 1, 0xFF, 0x14, 1, 0, 0xB, NULL, 1.0, 0.0, 0.0, SCALEVAL_LAUNCHER, 0.92000002, 1.0, 0x780078FF, 0.0, 0.0, 0.0, 2.0, 25.0, 10.0, 2.0, 4.0, 0.0, 0x76781
};
//D:80033304
WeaponStats bombcase_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 0x10, 1, 0xFF, 0x06, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0,4.0, 0.0, 0x402D82
};
//D:80033374
WeaponStats plastique_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 0x17, 1, 0xFF, 0x06, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0,4.0, 0.0, 0x422D82
};
//D:800333E4
WeaponStats flarepistol_stats = {
	1.0, 9.5, -18.0, -18.5, 3.0, 3.0, 8.5, 0x11, 1, 0xFF, 0x14, 1, 0, 0xC, NULL, 1.0, 0.0, 0.0, SCALEVAL_LAUNCHER, 0.92000002, 1.0, 0x81000FF, 10.5, 15.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0xAF1
};
//D:80033454
WeaponStats pitongun_stats = {
	1.0, 9.5, -18.0, -18.5, 3.0, 3.0, 8.5, 0x12, 1, 0xFF, 0x14, 1, 0, 0xC, NULL, 1.0, 0.0, 0.0, SCALEVAL_LAUNCHER, 0.92000002, 1.0, 0x81000FF, 10.5, 15.0, 0.0, 2.0, 20.0, 2.0, 2.0, 4.0, 0.0, 0xAF1
};
//D:800334C4
WeaponStats bug_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 0x14, 1, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x402982
};
//D:80033534
WeaponStats microcamera_stats = {
	1.0, 11.0, -21.0, -37.0, 3.0, 3.0, 8.5, 0x15, 1, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x402982
};
//D:800335A4
WeaponStats watchmagnetattract_stats = {
	1.0, 11.0, -41.799999, -33.0, 3.0, 3.0, 8.5, 0x19, 0xA, 0xFF, 0xFF, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 4.0, 0.0, 0x602980
};
//D:80033614
WeaponStats goldeneyekey_stats = {
	1.0, 11.0, -41.799999, -33.0, 3.0, 3.0, 8.5, 0x16, 1, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x482982
};
//D:80033684
WeaponStats camera_stats = {
	1.0, 11.0, -41.799999, -33.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0xFF, 1, 0, 0xF4, NULL, 1.0, 0.0, 20.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0xA990
};
//D:800336F4
WeaponStats Csuit_lf_handz_stats = {
	1.0, 0.0, 0.0, 0.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x110
};
//D:80033764
WeaponStats joypad_stats = {
	1.0, 0.0, 0.0, 0.0, 3.0, 3.0, 8.5, 0, 0, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x110
};
//D:800337D4
WeaponStats null1_stats = {
	1.0, 0.0, 0.0, 0.0, 3.0, 3.0, 8.5, 6, 0, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x110
};
//D:80033844
WeaponStats null2_stats = {
	1.0, 0.0, 0.0, 0.0, 3.0, 3.0, 8.5, 0xB, 0, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL1, 0.89999998, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x110
};
//D:800338B4
WeaponStats token_stats = {
	1.0, 11.0, -41.799999, -33.0, 3.0, 3.0, 8.5, 0x1D, 0, 0xFF, 0x00, 1, 0, 0, NULL, 1.0, 0.0, 0.0, SCALEVAL_KNIFE, 0.85000002, 1.0, 0xFF, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 4.0, 0.0, 0x82182
};
