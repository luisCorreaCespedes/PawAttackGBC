#pragma bank 255

// Scene: Level 4-1
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_37.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_1.h"

BANKREF(scene_30_sprites)

const far_ptr_t scene_30_sprites[] = {
    TO_FAR_PTR_T(spritesheet_37),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_1)
};
