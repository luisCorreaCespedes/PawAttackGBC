#pragma bank 255

// Scene: Level 2-3
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_30.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_15.h"
#include "data/spritesheet_2.h"
#include "data/spritesheet_1.h"

BANKREF(scene_18_sprites)

const far_ptr_t scene_18_sprites[] = {
    TO_FAR_PTR_T(spritesheet_30),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_15),
    TO_FAR_PTR_T(spritesheet_2),
    TO_FAR_PTR_T(spritesheet_1)
};
