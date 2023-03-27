#include <bondconstants.h>
#include <bondtypes.h>

ExplosionDetailsRecord object_explosion_details[] = {
    #include <assets/obseg/prop/alarm1/ExplosionDetailsRecord.inc.c>
    {
        EXPLOSION_SMALL,
        {0x2afe, 0xcb3e, 0x73f4, 0x278f, 0x6d3a, 0x44c8}
	},
    {
		EXPLOSION_LARGE2          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0xb9b0, 0x3eba, 0xad62, 0x75c8, 0xb70f, 0xf06e}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0x17d9, 0xdfcc, 0x57cd, 0x8254, 0x7345, 0xe011}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0x3779, 0xed72, 0x688d, 0xf67b, 0x37e5, 0x4f89}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0xe277, 0x0474, 0xdd1e, 0x0c48, 0x486c, 0xf87d}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0x7c3f, 0x16bc, 0x44a9, 0x1a58, 0xe412, 0x9297}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x3dc2, 0x16b6, 0xe30d, 0xbcab, 0xc592, 0xf9b5}
	},
    {
		EXPLOSION_MEDIUM          ,
		{0x719c, 0x7024, 0x9ee0, 0xc175, 0xa5dd, 0xc933}
	},
    {
		EXPLOSION_MEDIUM          ,
		{0x8e16, 0xbbca, 0x05c0, 0x1a73, 0x81be, 0xf821}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x2716, 0xf544, 0x0d35, 0xc20e, 0x83d7, 0x7d73}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x81a1, 0xb772, 0x1b57, 0x437a, 0x85fa, 0xb6c1}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x27eb, 0x5a7a, 0xbd1a, 0x27eb, 0x5a7a, 0xbd1a}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x98de, 0x8c36, 0xddd5, 0xf74b, 0x4f0a, 0x1f14}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x34f5, 0xf199, 0xa9f2, 0x3d27, 0xc707, 0xb9ad}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x678f, 0xdb91, 0x2a2e, 0x8d91, 0x6eee, 0x925e}
	},
    {
		EXPLOSION_LARGE           ,
		{0xd82f, 0xf4d7, 0x546f, 0xd6c7, 0x87d9, 0x0143}
	},
    {
		EXPLOSION_LARGE           ,
		{0x100e, 0xadf2, 0x1fdd, 0x45f1, 0x4772, 0xf8c6}
	},
    {
		EXPLOSION_LARGE           ,
		{0xef0b, 0x71bb, 0xb7f7, 0xbfa3, 0x03b8, 0xe44e}
	},
    {
		EXPLOSION_LARGE           ,
		{0xdfd1, 0x676a, 0x8597, 0xe8ac, 0xe210, 0x9a4d}
	},
    {
		EXPLOSION_LARGE           ,
		{0xab48, 0xdd9b, 0x4343, 0x04b8, 0x0dcc, 0x3b3d}
	},
    {
		EXPLOSION_LARGE           ,
		{0x836b, 0x6bbf, 0x9dbb, 0x3db7, 0x5957, 0x7341}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0xb1cc, 0x19e2, 0x0ea5, 0xb1cc, 0x19e2, 0x0ea5}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0xf093, 0xb2df, 0x1409, 0x271e, 0xe0b3, 0x418a}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x3ac2, 0x0102, 0xbf01, 0x3ac2, 0x0102, 0xbf01}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x3ac6, 0xe449, 0xa56e, 0xa4cf, 0xeda0, 0x1719}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x9bcf, 0xc333, 0x6384, 0x4298, 0xd455, 0x7bfa}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x839e, 0x0ba7, 0x1466, 0xdb6d, 0xd1b3, 0x1233}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x3f67, 0x7a70, 0x83de, 0x7052, 0x07d2, 0x36ff}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0xa409, 0x692d, 0xe286, 0xc63c, 0x82d0, 0x5d07}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0xd6ca, 0x1866, 0x839c, 0xbc6a, 0x86ad, 0x4dc6}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x96fc, 0xa1ef, 0xa9e6, 0xb9d2, 0xa3c5, 0xa045}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x7d2b, 0xe7dc, 0x55db, 0x378e, 0x4765, 0xb09c}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0xe2af, 0x2d43, 0x71fe, 0xe390, 0x93b3, 0x57e3}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x9367, 0x098a, 0x3b68, 0xd6f8, 0x4eaf, 0x7b83}
	},
    {
		EXPLOSION_BITS            ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BITS            ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x993d, 0xa2b2, 0x5028, 0x825e, 0x25b8, 0xd8ef}
	},
    {
		EXPLOSION_SMALL           ,
		{0x6553, 0x024d, 0xfd22, 0xd469, 0x18e4, 0x32f6}
	},
    {
		EXPLOSION_SMALL           ,
		{0xf742, 0x0cb5, 0x8ed2, 0x6021, 0x6ad5, 0xaa88}
	},
    {
		EXPLOSION_LARGE           ,
		{0x06d8, 0x82ef, 0x5b19, 0x4147, 0x5ae1, 0x374e}
	},
    {
		EXPLOSION_LARGE           ,
		{0x284d, 0x3e7c, 0x9330, 0xcf1e, 0x013f, 0x4e29}
	},
    {
		EXPLOSION_SMALL           ,
		{0xe339, 0xc0b6, 0xe5fc, 0x7054, 0x83a8, 0xc118}
	},
    {
		EXPLOSION_LARGE           ,
		{0xb49f, 0x0002, 0x4ef6, 0x8849, 0x0002, 0x070b}
	},
    {
		EXPLOSION_MEDIUM          ,
		{0x2d56, 0xa1ee, 0x4105, 0x8ae6, 0x6a2a, 0x60dd}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x79b2, 0xbc78, 0xb9b9, 0xc76a, 0x97a1, 0x3da3}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x3292, 0xddc3, 0x9265, 0x12a6, 0xe935, 0xb9bc}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x04db, 0x3cfd, 0xdb5c, 0x3b29, 0x50b7, 0x83d1}
	},
    {
		EXPLOSION_LARGE           ,
		{0xbe64, 0x08ad, 0x150d, 0x6aed, 0x542e, 0x63b3}
	},
    {
		EXPLOSION_LARGE           ,
		{0xd7e5, 0x1369, 0x5acc, 0x535a, 0x2105, 0x1bf7}
	},
    {
		EXPLOSION_LARGE           ,
		{0x7222, 0x3cee, 0x1a15, 0x122a, 0xadec, 0x5ef3}
	},
    {
		EXPLOSION_LARGE           ,
		{0x927f, 0x10b0, 0x5125, 0x7f4e, 0xbbc5, 0x8088}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0xe89d, 0x7502, 0x9003, 0x469d, 0x19f0, 0xa5e6}
	},
    {
		EXPLOSION_MEDIUM4         ,
		{0x3771, 0xc002, 0x80ff, 0xdbf6, 0x1705, 0x497a}
	},
    {
		EXPLOSION_MUSHROOM        ,
		{0xa954, 0xafde, 0xbb6c, 0xd4a6, 0x9883, 0xfa27}
	},
    {
		EXPLOSION_MUSHROOM        ,
		{0xde9f, 0xcef0, 0x6346, 0x80fb, 0xa382, 0x14d1}
	},
    {
		EXPLOSION_MUSHROOM        ,
		{0x448e, 0xd4cc, 0xc1b5, 0x442f, 0xc1d1, 0xee05}
	},
    {
		EXPLOSION_MUSHROOM        ,
		{0xc7c0, 0xf918, 0x095e, 0xece2, 0x06d4, 0xc64d}
	},
    {
		EXPLOSION_MUSHROOM        ,
		{0xc491, 0x16ec, 0xdea7, 0x5a19, 0x9de7, 0xff28}
	},
    {
		EXPLOSION_MUSHROOM        ,
		{0xe889, 0x2da6, 0x2775, 0x153c, 0xbae6, 0xcb1b}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x2d56, 0xa1ee, 0x4105, 0x8ae6, 0x6a2a, 0x60dd}
	},
    {
		EXPLOSION_SMALL           ,
		{0xe5e6, 0x8fb7, 0xd5fe, 0xe959, 0xd656, 0xfb82}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x5876, 0x3a4f, 0xd115, 0xa10d, 0x265d, 0x2c02}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x787e, 0xc128, 0xd96a, 0x60c9, 0x18e7, 0x99ad}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x879a, 0x90e4, 0xc20f, 0x35fe, 0xc807, 0x91d8}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x40ae, 0x62b6, 0xd240, 0xac8d, 0x47c5, 0x17d1}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x15c6, 0xb37d, 0x118a, 0x4e61, 0x5d02, 0x7d50}
	},
    {
		EXPLOSION_SMALL           ,
		{0x15c6, 0xb37d, 0x118a, 0x4e61, 0x5d02, 0x7d50}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x2469, 0x8ae5, 0x524f, 0xe5f6, 0xbe4a, 0xc865}
	},
    {
		EXPLOSION_LARGE2          ,
		{0x2957, 0x1b22, 0x27c7, 0x9663, 0x0ddf, 0x411f}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x15c6, 0xb37d, 0x118a, 0x4e61, 0x5d02, 0x7d50}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0xf8f4, 0xf1e0, 0x473f, 0x41dd, 0xa510, 0xc9c6}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x7a51, 0x2382, 0x9b36, 0x29e5, 0x5921, 0x017a}
	},
    {
		EXPLOSION_LARGE           ,
		{0x8666, 0x3dd9, 0xe619, 0x6134, 0xcc94, 0x1a5c}
	},
    {
		EXPLOSION_LARGE           ,
		{0x7f39, 0x31c5, 0x9ac3, 0x70ab, 0x0551, 0xb069}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0xd727, 0x7ab2, 0x786b, 0xf5ad, 0x3fc4, 0xd6ce}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x4548, 0xd59e, 0x1edc, 0xe88d, 0xe9e4, 0xaf76}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x262f, 0x491b, 0xfd57, 0x6715, 0xe7ed, 0x2626}
	},
    {
		EXPLOSION_BITS            ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0xbcae, 0x0bd1, 0x0ff7, 0x3a30, 0x7240, 0x83b7}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0xb2c6, 0x170a, 0x0a23, 0x6bbe, 0xb593, 0x82db}
	},
    {
		EXPLOSION_LARGE2          ,
		{0x275b, 0x8ad3, 0x002c, 0x27b5, 0x8ad3, 0x002c}
	},
    {
		EXPLOSION_LARGE2          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x33a1, 0x8a01, 0x4d42, 0xd9cb, 0xb865, 0xb336}
	},
    {
		EXPLOSION_LARGE           ,
		{0x8c06, 0x78fc, 0x8f9a, 0x4df5, 0x4d53, 0x22f9}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x99e9, 0x0107, 0xef5e, 0x0560, 0xe6df, 0x4b36}
	}, /*Locker3*/
    {
		EXPLOSION_MEDIUM2         ,
		{0x31e7, 0x0023, 0xb2ae, 0xa2d7, 0xe540, 0x90b2}
	}, /*locker4*/
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	}, /*roofgun(med)*/
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	}, /*engin(large0*/
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x33a1, 0x8a01, 0x4d42, 0xd9cb, 0xb865, 0xb336}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x33a1, 0x8a01, 0x4d42, 0xd9cb, 0xb865, 0xb336}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x33a1, 0x8a01, 0x4d42, 0xd9cb, 0xb865, 0xb336}
	},
    {
		EXPLOSION_MEDUIM_SMALLFIRE,
		{0x33a1, 0x8a01, 0x4d42, 0xd9cb, 0xb865, 0xb336}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MEDIUM          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_EXTINGUISHER    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MEDIUM2         ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL2          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_SMALL           ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_MULTIFIRE       ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_LARGE4          ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}
	},
    {
		EXPLOSION_BREAK_OBJECT    ,
		{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff}
    }
};
