#pragma bank 255

// Scene: Level 01
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_12.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_14.h"
#include "data/spritesheet_15.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_17.h"
#include "data/spritesheet_18.h"
#include "data/spritesheet_1.h"

BANKREF(scene_8_sprites)

const far_ptr_t scene_8_sprites[] = {
    TO_FAR_PTR_T(spritesheet_12),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_14),
    TO_FAR_PTR_T(spritesheet_15),
    TO_FAR_PTR_T(spritesheet_16),
    TO_FAR_PTR_T(spritesheet_17),
    TO_FAR_PTR_T(spritesheet_18),
    TO_FAR_PTR_T(spritesheet_1)
};
