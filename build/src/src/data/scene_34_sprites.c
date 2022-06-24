#pragma bank 255

// Scene: Level 4-3
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_39.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_1.h"

BANKREF(scene_34_sprites)

const far_ptr_t scene_34_sprites[] = {
    TO_FAR_PTR_T(spritesheet_39),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_1)
};
