#pragma bank 255

// Scene: Level 05
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_29.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_15.h"
#include "data/spritesheet_17.h"
#include "data/spritesheet_18.h"
#include "data/spritesheet_28.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_7.h"

BANKREF(scene_16_sprites)

const far_ptr_t scene_16_sprites[] = {
    TO_FAR_PTR_T(spritesheet_29),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_16),
    TO_FAR_PTR_T(spritesheet_15),
    TO_FAR_PTR_T(spritesheet_17),
    TO_FAR_PTR_T(spritesheet_18),
    TO_FAR_PTR_T(spritesheet_28),
    TO_FAR_PTR_T(spritesheet_1),
    TO_FAR_PTR_T(spritesheet_7)
};
