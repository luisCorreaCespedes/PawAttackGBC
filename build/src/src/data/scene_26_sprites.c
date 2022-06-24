#pragma bank 255

// Scene: Level 3-3
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_36.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_1.h"

BANKREF(scene_26_sprites)

const far_ptr_t scene_26_sprites[] = {
    TO_FAR_PTR_T(spritesheet_36),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_1)
};
