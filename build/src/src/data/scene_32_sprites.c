#pragma bank 255

// Scene: Level 4-2
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_38.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_1.h"

BANKREF(scene_32_sprites)

const far_ptr_t scene_32_sprites[] = {
    TO_FAR_PTR_T(spritesheet_38),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_1)
};
