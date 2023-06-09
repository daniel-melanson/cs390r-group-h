//D:8003C670
ModelJoint JOINTLIST(suit_lf_hand)[] = {
    {0x0401, 0x0000, 0x0000},
    {0x0002, 0x0000, 0x0000},
    {0x0002, 0x0003, 0x0003},
    {0x0002, 0x0006, 0x0006},
    {0x0002, 0x0009, 0x000C},
    {0x0002, 0x000C, 0x0009},
    {0x0002, 0x000F, 0x0012},
    {0x0002, 0x0012, 0x000F},
    {0x0002, 0x0015, 0x0018},
    {0x0002, 0x0018, 0x0015},
    {0x0002, 0x001B, 0x001E},
    {0x0002, 0x001E, 0x001B},
    {0x0002, 0x0021, 0x0024},
    {0x0002, 0x0024, 0x0021},
    {0x0002, 0x0027, 0x002A},
    {0x0002, 0x002A, 0x0027},
    {0x0015, 0x002D, 0x002D},
    {0x0015, 0x002E, 0x002E},
    {0x0015, 0x002F, 0x002F},
};
#ifdef DEBUG
char* suit_lf_hand_JointNames[] = {
    "SKEL_LF_WRIST_ER",
    "SKEL_HOUR",
    "SKEL_MINUTE",
    "SKEL_SECOND",
    "SKEL_POSITION__R",
    "SKEL_BACK_W",
    "SKEL_BASE_P",
    "SKEL_LF_SHOULDER",
    "SKEL_LF_ELBOW_ER" };
#endif
//D:8003C6E4
MODELSKELETON(suit_lf_hand, 19, 45)
