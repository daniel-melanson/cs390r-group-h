#include <ultra64.h>
#include <memp.h>
#include "image.h"
#include "initmttex.h"

void set_mt_tex_alloc(void)
{  
    g_TexCacheCount = 0;

    if (tokenFind(1, "-mt"))
    {
        bytes = strtol(tokenFind(1, "-mt"), 0x0, 0) << 10;
    }

    texInitPool(&ptr_texture_alloc_start, mempAllocBytesInBank(bytes, 4), bytes);
}
