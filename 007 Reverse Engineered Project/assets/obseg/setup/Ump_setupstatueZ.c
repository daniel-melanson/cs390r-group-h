/*
* This file was automatically generated
* 
* Monday, January 17, 2022 9:36:08 AM
* Getools.Lib: 21.9.18.1
*/

#include "ultra64.h"
#include "bondtypes.h"

// forward declarations
PadRecord padlist[];
BoundPadRecord pad3dlist[];
s32 propDefs[];
s32 intro[];
waygroup pathsets[];
waypoint pathwaypoints[];
PathRecord patrolpaths[];
AIListRecord ailists[];

stagesetup Ump_setupstatueZ = {
    &pathwaypoints,
    &pathsets,
    &intro,
    &propDefs,
    &patrolpaths,
    &ailists,
    &padlist,
    &pad3dlist,
    NULL,
    NULL
};

PadRecord padlist[] = {
    { {-629.0f, 31.0f, 90.0f}, {0.0f, 1.0f, 0.0f}, {-0.720307f, 0.0f, 0.693655f}, "p5671c1", 0 },
    { {35.0f, 31.0f, 416.0f}, {0.0f, 1.0f, 0.0f}, {2e-06, 0.0f, 1.0f}, "p2164a", 0 },
    { {-57.0f, 31.0f, 491.0f}, {0.0f, 1.0f, 0.0f}, {2e-06, 0.0f, 1.0f}, "p2139a", 0 },
    { {108.0f, 31.0f, 417.0f}, {0.0f, 1.0f, 0.0f}, {2e-06, 0.0f, 1.0f}, "p2166a", 0 },
    { {-40.0f, 31.0f, 418.0f}, {0.0f, 1.0f, 0.0f}, {2e-06, 0.0f, 1.0f}, "p2139a", 0 },
    { {121.0f, 31.0f, 485.0f}, {0.0f, 1.0f, 0.0f}, {2e-06, 0.0f, 1.0f}, "p2091a", 0 },
    { {-1758.0f, 140.0f, 492.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4211b1", 0 },
    { {-678.0f, 31.0f, 444.0f}, {0.0f, 1.0f, 0.0f}, {0.707105f, 0.0f, -0.707108f}, "", 0 },
    { {-476.0f, 0.0f, 521.0f}, {0.0f, 1.0f, 0.0f}, {-0.965925f, 0.0f, 0.258821f}, "p5679c", 0 },
    { {-2068.0f, 140.0f, 499.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3409b", 0 },
    { {-2076.0f, 140.0f, 488.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3410b", 0 },
    { {-2068.0f, 140.0f, 516.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3409b", 0 },
    { {-2041.0f, 140.0f, 591.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3412b", 0 },
    { {-2074.0f, 140.0f, 449.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3410b", 0 },
    { {-2044.0f, 140.0f, 390.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3410b", 0 },
    { {-2016.0f, 140.0f, 622.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p3412b", 0 },
    { {-2067.0f, 140.0f, 557.0f}, {0.0f, 1.0f, 0.0f}, {-0.959759f, 0.0f, 0.280826f}, "p3398b", 0 },
    { {-2055.0f, 140.0f, 555.0f}, {0.0f, 1.0f, 0.0f}, {-0.959759f, 0.0f, 0.280826f}, "p3398b", 0 },
    { {-2155.0f, 140.0f, 568.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p4269b2", 0 },
    { {-2131.0f, 140.0f, 602.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p4269b2", 0 },
    { {-2081.0f, 140.0f, 542.0f}, {0.0f, 1.0f, 0.0f}, {-0.959759f, 0.0f, 0.280826f}, "p4266b", 0 },
    { {-1841.0f, 140.0f, 381.0f}, {0.0f, 1.0f, 0.0f}, {0.999739f, 0.0f, -0.022853f}, "p4213b", 0 },
    { {-2463.0f, 123.0f, 469.0f}, {0.0f, 1.0f, 0.0f}, {0.970632f, 0.0f, -0.240569f}, "p4269b2", 0 },
    { {-97.0f, 31.0f, -25.0f}, {0.0f, 1.0f, 0.0f}, {2e-06, 0.0f, 1.0f}, "p2381a", 0 },
    { {-1740.0f, 95.0f, 515.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4211b1", 0 },
    { {-1726.0f, 108.0f, 503.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4206b", 0 },
    { {-1746.0f, 108.0f, 509.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4211b1", 0 },
    { {-1734.0f, 108.0f, 521.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4211b1", 0 },
    { {-1750.0f, 108.0f, 526.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4211b1", 0 },
    { {-1733.0f, 108.0f, 508.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4206b", 0 },
    { {-1757.0f, 108.0f, 531.0f}, {0.0f, 1.0f, 0.0f}, {0.720307f, 0.0f, -0.693655f}, "p4211b1", 0 },
    { {15.0f, 16.0f, 124.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2278a", 0 },
    { {-4.0f, 16.0f, 179.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2288a", 0 },
    { {-45.0f, 16.0f, 173.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2303a", 0 },
    { {-90.0f, 16.0f, 95.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2332a", 0 },
    { {-114.0f, 16.0f, 42.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2357a", 0 },
    { {-78.0f, 16.0f, 39.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2336a", 0 },
    { {-55.0f, 16.0f, 86.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2338a", 0 },
    { {0.0f, 16.0f, 110.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2281a", 0 },
    { {-129.0f, 16.0f, 8.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2350a", 0 },
    { {-68.0f, 16.0f, 5.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2427a", 0 },
    { {-61.0f, 16.0f, -12.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2376a", 0 },
    { {-91.0f, 16.0f, -26.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2009a", 0 },
    { {2.0f, 16.0f, 8.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2347a", 0 },
    { {-17.0f, 16.0f, 34.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2295a", 0 },
    { {-24.0f, 16.0f, 75.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2342a", 0 },
    { {48.0f, 16.0f, 129.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2282a", 0 },
    { {119.0f, 16.0f, 151.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2261a", 0 },
    { {120.0f, 16.0f, 192.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2260a", 0 },
    { {77.0f, 16.0f, 183.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2178a", 0 },
    { {31.0f, 16.0f, 167.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2288a", 0 },
    { {93.0f, 16.0f, 239.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2171a", 0 },
    { {62.0f, 16.0f, 90.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2508a1", 0 },
    { {70.0f, 16.0f, 292.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2110a", 0 },
    { {19.0f, 16.0f, 307.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2447a", 0 },
    { {-11.0f, 16.0f, 336.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2217a", 0 },
    { {8.0f, 16.0f, 365.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2219a", 0 },
    { {52.0f, 16.0f, 342.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2219a", 0 },
    { {-51.0f, 16.0f, 275.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2422a", 0 },
    { {42.0f, 18.0f, 645.0f}, {0.0f, 1.0f, 0.0f}, {0.081255f, 0.0f, -0.996693f}, "p2042a", 0 },
    { {-142.0f, 16.0f, 91.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2330a", 0 },
    { {-145.0f, 66.0f, 198.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2405a", 0 },
    { {-112.0f, 66.0f, 295.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2136a", 0 },
    { {-63.0f, 66.0f, 374.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2139a", 0 },
    { {-80.0f, 16.0f, 180.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2301a", 0 },
    { {-2.0f, 16.0f, 279.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2226a", 0 },
    { {36.0f, 16.0f, 228.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p2229a", 0 },
    { {83.0f, 55.0f, 22.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2439a", 0 },
    { {62.0f, 55.0f, 12.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2289a", 0 },
    { {33.0f, 55.0f, 84.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2435a2", 0 },
    { {33.0f, 55.0f, 84.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2435a2", 0 },
    { {27.0f, 16.0f, 22.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2482a", 0 },
    { {-219.0f, 16.0f, 39.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4873c", 0 },
    { {-291.0f, 16.0f, 4.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4877c", 0 },
    { {-356.0f, 16.0f, 57.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5476c", 0 },
    { {-338.0f, 16.0f, 117.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5497c", 0 },
    { {-289.0f, 16.0f, 112.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5485c2", 0 },
    { {-325.0f, 16.0f, 178.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5499c", 0 },
    { {-415.0f, 16.0f, 168.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5391c", 0 },
    { {-402.0f, 16.0f, 126.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5620c", 0 },
    { {-412.0f, 16.0f, 65.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5471c", 0 },
    { {-500.0f, 16.0f, 185.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5390c", 0 },
    { {-559.0f, 16.0f, 127.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5380c", 0 },
    { {-601.0f, 16.0f, 114.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5354c", 0 },
    { {-603.0f, 16.0f, 163.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5374c", 0 },
    { {-519.0f, 16.0f, 230.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5534c1", 0 },
    { {-438.0f, 16.0f, 225.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5389c", 0 },
    { {-458.0f, 16.0f, 140.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5392c", 0 },
    { {-344.0f, 16.0f, 237.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5526c", 0 },
    { {-386.0f, 16.0f, 321.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5048c1", 0 },
    { {-341.0f, 16.0f, 396.0f}, {0.0f, 1.0f, 0.0f}, {0.822531f, 0.0f, 0.56872f}, "p5108c1", 0 },
    { {-294.0f, 16.0f, 363.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5558c", 0 },
    { {-292.0f, 16.0f, 331.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5547c1", 0 },
    { {-287.0f, 16.0f, 195.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568717f}, "p4880c", 0 },
    { {-230.0f, 16.0f, 205.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5537c", 0 },
    { {-230.0f, 16.0f, 339.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5110c", 0 },
    { {-218.0f, 16.0f, 392.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5543c", 0 },
    { {-279.0f, 16.0f, 429.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5542c", 0 },
    { {-343.0f, 16.0f, 467.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p4912c", 0 },
    { {-428.0f, -13.0f, 440.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5678c", 0 },
    { {-393.0f, 1.0f, 381.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5106c", 0 },
    { {-234.0f, 16.0f, 508.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p4869c2", 0 },
    { {-173.0f, 16.0f, 489.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5560c", 0 },
    { {-415.0f, -23.0f, 506.0f}, {0.0f, 1.0f, 0.0f}, {0.822531f, 0.0f, 0.56872f}, "p5827c", 0 },
    { {-409.0f, -23.0f, 589.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5861c", 0 },
    { {-494.0f, -5.0f, 688.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568714f}, "p5137c1", 0 },
    { {-451.0f, 1.0f, 758.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p4925c2", 0 },
    { {-368.0f, -23.0f, 702.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5062c1", 0 },
    { {-310.0f, -10.0f, 620.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568715f}, "p4919c", 0 },
    { {-362.0f, -23.0f, 560.0f}, {0.0f, 1.0f, 0.0f}, {0.822531f, 0.0f, 0.56872f}, "p4923c", 0 },
    { {-349.0f, -24.0f, 786.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5061c1", 0 },
    { {-304.0f, -24.0f, 798.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5123c", 0 },
    { {-282.0f, -24.0f, 759.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568714f}, "p5121c", 0 },
    { {-558.0f, -5.0f, 530.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568714f}, "p5765c", 0 },
    { {-551.0f, -5.0f, 585.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568714f}, "p5860c", 0 },
    { {-537.0f, -5.0f, 644.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568714f}, "p5856c", 0 },
    { {-612.0f, -5.0f, 592.0f}, {0.0f, 1.0f, 0.0f}, {0.822535f, 0.0f, 0.568714f}, "p5151c1", 0 },
    { {-519.0f, 1.0f, 795.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5144c", 0 },
    { {-652.0f, 16.0f, 37.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5353c", 0 },
    { {-658.0f, 16.0f, 52.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5353c", 0 },
    { {-659.0f, 16.0f, 142.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5357c", 0 },
    { {-601.0f, 16.0f, 32.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5402c", 0 },
    { {-461.0f, 16.0f, 11.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5469c", 0 },
    { {-415.0f, 16.0f, 4.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4967c", 0 },
    { {-536.0f, 16.0f, 67.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5406c", 0 },
    { {-632.0f, 16.0f, 113.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5671c2", 0 },
    { {-553.0f, 16.0f, 714.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p4883c1", 0 },
    { {-617.0f, 6.0f, 722.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5154c1", 0 },
    { {-620.0f, 6.0f, 645.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5193c2", 0 },
    { {-631.0f, -6.0f, 566.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5151c1", 0 },
    { {-719.0f, 25.0f, 650.0f}, {0.0f, 1.0f, 0.0f}, {0.822531f, 0.0f, 0.56872f}, "p5193c3", 0 },
    { {-785.0f, 6.0f, 479.0f}, {0.0f, 1.0f, 0.0f}, {0.822529f, 0.0f, 0.568723f}, "p5077c", 0 },
    { {-808.0f, 25.0f, 608.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p4885c", 0 },
    { {-759.0f, 25.0f, 673.0f}, {0.0f, 1.0f, 0.0f}, {0.822529f, 0.0f, 0.568723f}, "p4862c", 0 },
    { {-739.0f, 21.0f, 735.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5608c", 0 },
    { {-781.0f, 57.0f, 813.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5064c1", 0 },
    { {-743.0f, 12.0f, 599.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568715f}, "p4867c", 0 },
    { {-828.0f, 57.0f, 785.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5172c", 0 },
    { {-792.0f, 21.0f, 690.0f}, {0.0f, 1.0f, 0.0f}, {0.82254f, 0.0f, 0.568707f}, "p4862c", 0 },
    { {-829.0f, 57.0f, 820.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5064c1", 0 },
    { {-859.0f, 61.0f, 825.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5169c", 0 },
    { {-870.0f, 57.0f, 792.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5173c", 0 },
    { {-860.0f, 21.0f, 567.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5569c", 0 },
    { {-867.0f, 21.0f, 516.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5184c", 0 },
    { {-737.0f, 6.0f, 478.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5074c1", 0 },
    { {-773.0f, 6.0f, 429.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4982c", 0 },
    { {-816.0f, -7.0f, 385.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5229c", 0 },
    { {-815.0f, 0.0f, 339.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5234c", 0 },
    { {-710.0f, -38.0f, 338.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5242c1", 0 },
    { {-720.0f, -28.0f, 391.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5023c", 0 },
    { {-845.0f, 6.0f, 415.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5218c", 0 },
    { {-889.0f, 6.0f, 388.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5224c1", 0 },
    { {-876.0f, 6.0f, 333.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5092c", 0 },
    { {-868.0f, 6.0f, 250.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5238c", 0 },
    { {-805.0f, -32.0f, 263.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5096c", 0 },
    { {-932.0f, 15.0f, 438.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5222c", 0 },
    { {-965.0f, 48.0f, 503.0f}, {1e-06, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5201c", 0 },
    { {-916.0f, 31.0f, 530.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5580c", 0 },
    { {-942.0f, 48.0f, 606.0f}, {1e-06, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p4857c", 0 },
    { {-997.0f, 48.0f, 575.0f}, {1e-06, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5202c", 0 },
    { {-978.0f, 66.0f, 694.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5180c2", 0 },
    { {-920.0f, 58.0f, 759.0f}, {1e-06, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5612c", 0 },
    { {-877.0f, 58.0f, 727.0f}, {1e-06, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568715f}, "p5069c1", 0 },
    { {-688.0f, -38.0f, 283.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5244c1", 0 },
    { {-639.0f, -38.0f, 331.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p4894c2", 0 },
    { {-592.0f, -38.0f, 365.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p4894c1", 0 },
    { {-577.0f, -38.0f, 299.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5277c", 0 },
    { {-611.0f, -38.0f, 286.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5275c2", 0 },
    { {-612.0f, -38.0f, 242.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p5809c", 0 },
    { {-676.0f, -38.0f, 216.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5602c", 0 },
    { {-711.0f, -38.0f, 214.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4908c", 0 },
    { {-757.0f, -38.0f, 163.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p5593c", 0 },
    { {-772.0f, -38.0f, 121.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p4902c", 0 },
    { {-841.0f, -29.0f, 9.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568717f}, "p4957c", 0 },
    { {-920.0f, -18.0f, -15.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5318c", 0 },
    { {-913.0f, 14.0f, 48.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5280c", 0 },
    { {-871.0f, 14.0f, 58.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5300c", 0 },
    { {-850.0f, -18.0f, 122.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5306c", 0 },
    { {-920.0f, -18.0f, -76.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5343c", 0 },
    { {-959.0f, 2.0f, -119.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p5741c", 0 },
    { {-840.0f, -18.0f, -108.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5342c", 0 },
    { {-945.0f, 14.0f, 85.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5320c1", 0 },
    { {-999.0f, 14.0f, 15.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p4979c", 0 },
    { {-1006.0f, 14.0f, -62.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5338c", 0 },
    { {-979.0f, 14.0f, -24.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5336c", 0 },
    { {-868.0f, 14.0f, 92.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5301c", 0 },
    { {-715.0f, 6.0f, 522.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5211c2", 0 },
    { {-668.0f, 6.0f, 558.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5210c", 0 },
    { {-775.0f, 6.0f, 558.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5872c", 0 },
    { {-787.0f, 6.0f, 513.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5079c", 0 },
    { {-774.0f, 6.0f, 535.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568719f}, "p5190c", 0 },
    { {-1016.0f, 72.0f, 644.0f}, {1e-06, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p5180c1", 0 },
    { {-1016.0f, 2.0f, -118.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p3417b", 0 },
    { {-1087.0f, 7.0f, -113.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568718f}, "p3357b2", 0 },
    { {-1170.0f, 22.0f, -85.0f}, {0.0f, 1.0f, 0.0f}, {0.822531f, 0.0f, 0.568721f}, "p1026b", 0 },
    { {-1183.0f, 22.0f, -20.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3424b", 0 },
    { {-1159.0f, 22.0f, 18.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p3096b", 0 },
    { {-1126.0f, 22.0f, -8.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3381b", 0 },
    { {-1235.0f, 22.0f, -11.0f}, {0.0f, 1.0f, 0.0f}, {0.822532f, 0.0f, 0.568718f}, "p3103b", 0 },
    { {-1223.0f, 22.0f, 50.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p3099b", 0 },
    { {-1269.0f, 22.0f, 87.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3375b", 0 },
    { {-1247.0f, 22.0f, 141.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3376b", 0 },
    { {-1196.0f, 22.0f, 115.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p3405b", 0 },
    { {-1157.0f, 22.0f, 79.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p3089b", 0 },
    { {-1125.0f, 24.0f, 76.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3087b", 0 },
    { {-1326.0f, 22.0f, 133.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3374b", 0 },
    { {-1367.0f, 7.0f, 105.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2935b", 0 },
    { {-1366.0f, 7.0f, 6.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p2934b", 0 },
    { {-1332.0f, 22.0f, -22.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3198b", 0 },
    { {-1307.0f, 22.0f, -39.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3059b", 0 },
    { {-1312.0f, 22.0f, -62.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3058b", 0 },
    { {-1297.0f, 22.0f, -112.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3207b", 0 },
    { {-1273.0f, 22.0f, -119.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p981b", 0 },
    { {-1255.0f, 22.0f, -63.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p2970b", 0 },
    { {-1389.0f, 16.0f, 66.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3053b", 0 },
    { {-1236.0f, 28.0f, 194.0f}, {0.0f, 1.0f, 0.0f}, {0.822534f, 0.0f, 0.568716f}, "p3072b2", 0 },
    { {-1182.0f, 28.0f, 166.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3453b2", 0 },
    { {-1500.0f, 86.0f, 311.0f}, {1e-06, 1.0f, 0.0f}, {0.822531f, 0.0f, 0.56872f}, "p1525b2", 0 },
    { {-1995.0f, 100.0f, 505.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3409b", 0 },
    { {-1150.0f, 26.0f, 141.0f}, {0.0f, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p3476b", 0 },
    { {-1893.0f, 100.0f, 316.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4210b", 0 },
    { {-1683.0f, 100.0f, 658.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p1492b", 0 },
    { {-1655.0f, 100.0f, 355.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p1256b1", 0 },
    { {-2122.0f, 100.0f, 559.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4269b1", 0 },
    { {-2125.0f, 100.0f, 588.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4269b2", 0 },
    { {-2142.0f, 100.0f, 615.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4269b2", 0 },
    { {-2231.0f, 100.0f, 671.0f}, {1e-06, 1.0f, 0.0f}, {0.822533f, 0.0f, 0.568717f}, "p4269b2", 0 },
    { {-2294.0f, 100.0f, 700.0f}, {1e-06, 1.0f, 0.0f}, {0.871735f, 0.0f, -0.489978f}, "p4269b2", 0 },
    { {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, NULL, 0 }
};


BoundPadRecord pad3dlist[] = {
    { {-705.0f, -12.0f, 480.0f}, {-0.662449f, 0.033863f, -0.748342f}, {0.203025f, 0.969705f, -0.135843f}, "p5865c", 0, {-1.615254f, 1.708657f, -1.478706f, 27.776981f, -14.050579f, 45.816116f} },
    { {-740.0f, -10.0f, 440.0f}, {0.662449f, -0.033863f, 0.748342f}, {0.203025f, 0.969705f, -0.135843f}, "p5866c", 0, {-1.459784f, 1.902518f, -4.336241f, 25.581896f, -14.319309f, 45.548878f} },
    { {-428.0f, -11.0f, 544.0f}, {-0.267354f, 0.033863f, -0.963003f}, {0.009059f, 0.999426f, 0.032629f}, "p5839c", 0, {-2.194619f, 0.963556f, -1.097829f, 29.001957f, -13.987675f, 45.06302f} },
    { {-443.0f, -9.0f, 492.0f}, {0.267354f, -0.033863f, 0.963003f}, {0.009059f, 0.999426f, 0.032629f}, "p5836c", 0, {-1.766077f, 1.392098f, -4.340937f, 25.758848f, -14.155114f, 44.89558f} },
    { {-612.0f, 5.0f, 116.0f}, {0.0f, 0.0f, -1.0f}, {0.000155f, 1.0f, 0.0f}, "p5671c1", 0, {-0.002788f, 1.000465f, -1.0f, 7.0f, -3.0f, 18.000154f} },
    { {-2096.0f, 107.0f, 522.0f}, {0.312944f, -0.000522f, 0.949771f}, {0.000124f, 1.0f, 0.000508f}, "p4268b", 0, {-1.566567f, 2.103664f, -4.772341f, 31.953773f, -14.002541f, 45.016754f} },
    { {-2076.0f, 107.0f, 584.0f}, {-0.312944f, 0.000522f, -0.949771f}, {0.000124f, 1.0f, 0.000508f}, "p4266b", 0, {-1.696572f, 1.91233f, -3.806392f, 33.232666f, -14.017389f, 45.00203f} },
    { {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, NULL, 0, {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f} }
};


s32 propDefs[] = {
    /* Type = Collectable; index = 0 */
    _mkword(256, _mkshort(0, 8)), _mkword(333, 177), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0x58, 0xff), 0xffff), 0,
    /* Type = Collectable; index = 1 */
    _mkword(512, _mkshort(0, 8)), _mkword(0, 1), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf0, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 2 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 3), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 3 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 4), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 4 */
    _mkword(512, _mkshort(0, 8)), _mkword(0, 81), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf1, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 5 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 82), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 6 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 87), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 7 */
    _mkword(307, _mkshort(0, 8)), _mkword(0, 31), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf2, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 8 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 46), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 9 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 50), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 10 */
    _mkword(307, _mkshort(0, 8)), _mkword(0, 127), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf3, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 11 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 115), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 12 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 105), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 13 */
    _mkword(307, _mkshort(0, 8)), _mkword(0, 166), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf4, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 14 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 167), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 15 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 168), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 16 */
    _mkword(307, _mkshort(0, 8)), _mkword(0, 202), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf5, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 17 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 216), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 18 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 219), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 19 */
    _mkword(307, _mkshort(0, 8)), _mkword(0, 6), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf6, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 20 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 24), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 21 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 222), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Collectable; index = 22 */
    _mkword(307, _mkshort(0, 8)), _mkword(0, 209), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(_mkshort(0xf7, 0xff), 0xffff), 0,
    /* Type = AmmoBox; index = 23 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 210), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = AmmoBox; index = 24 */
    _mkword(153, _mkshort(0, 20)), _mkword(5, 213), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0), _mkword(0xffff, 0),
    /* Type = Armour; index = 25 */
    _mkword(384, _mkshort(0, 21)), _mkword(115, 23), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, 65536, 0,
    /* Type = Armour; index = 26 */
    _mkword(384, _mkshort(0, 21)), _mkword(115, 7), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, 65536, 0,
    /* Type = Door; index = 27 */
    _mkword(256, _mkshort(0, 1)), _mkword(183, 5), 0x60000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, 0x00000001, 0x004b0000, 0x03e80000, 0x00001999, 0x00001999, 0x00010000, _mkword(0, 5), 0x00000001, 1500, 10, 0.0f, 0, 0, 0, 0.0f, _mkword(0, 0), 0, _mkword(0, _mkshort(0, 0)), 0x00000000, _mkword(_mkshort(0, 0), 0), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* Type = Door; index = 28 */
    _mkword(256, _mkshort(0, 1)), _mkword(183, 6), 0x40000000, 0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000000, 0x00000000, 0, 0, _mkword(1000, 0), 0, 0, 0xffffffff, 0x004b0000, 0x03e80000, 0x00001999, 0x00001999, 0x00010000, _mkword(0, 5), 0x00000001, 1500, 10, 0.0f, 0, 0, 0, 0.0f, _mkword(0, 0), 0, _mkword(0, _mkshort(0, 0)), 0x00000000, _mkword(_mkshort(0, 0), 0), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* Type = EndProps; index = 29 */
    _mkword(0, _mkshort(0, 48))
};


s32 intro[] = {
    /* Type = Spawn; index = 0 */
    _mkword(0, _mkshort(0, 0)), 59, 0,
    /* Type = Spawn; index = 1 */
    _mkword(0, _mkshort(0, 0)), 38, 0,
    /* Type = Spawn; index = 2 */
    _mkword(0, _mkshort(0, 0)), 125, 0,
    /* Type = Spawn; index = 3 */
    _mkword(0, _mkshort(0, 0)), 95, 0,
    /* Type = Spawn; index = 4 */
    _mkword(0, _mkshort(0, 0)), 112, 0,
    /* Type = Spawn; index = 5 */
    _mkword(0, _mkshort(0, 0)), 138, 0,
    /* Type = Spawn; index = 6 */
    _mkword(0, _mkshort(0, 0)), 171, 0,
    /* Type = Spawn; index = 7 */
    _mkword(0, _mkshort(0, 0)), 217, 0,
    /* Type = StartWeapon; index = 8 */
    _mkword(0, _mkshort(0, 1)), 1, -1, 0,
    /* Type = Cuff; index = 9 */
    _mkword(0, _mkshort(0, 5)), 0,
    /* Type = EndIntro; index = 10 */
    _mkword(0, _mkshort(0, 9))
};


waygroup pathsets[] = {
    { NULL, NULL, 0 }
};


waypoint pathwaypoints[] = {
    { 0xffffffff, NULL, 0x00000000, 0x00000000 }
};


s32 unknown_setup_block_0[] = { 0 };


PathRecord patrolpaths[] = {
    { NULL, 0x00, 0x00, 0x0000 }
};


AIListRecord ailists[] = {
    /* index = 0 */
    { NULL, 0x00000000 }
};




