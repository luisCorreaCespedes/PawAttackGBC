#pragma bank 255

// Scene: Level 3-1
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_34.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_1.h"

BANKREF(scene_22_sprites)

const far_ptr_t scene_22_sprites[] = {
    TO_FAR_PTR_T(spritesheet_34),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_1)
};
