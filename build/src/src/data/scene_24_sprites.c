#pragma bank 255

// Scene: Level 3-2
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_35.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_1.h"

BANKREF(scene_24_sprites)

const far_ptr_t scene_24_sprites[] = {
    TO_FAR_PTR_T(spritesheet_35),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_1)
};
