#pragma bank 255

// Scene: Level 03
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_23.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_24.h"
#include "data/spritesheet_5.h"
#include "data/spritesheet_21.h"
#include "data/spritesheet_25.h"
#include "data/spritesheet_14.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_4.h"

BANKREF(scene_12_sprites)

const far_ptr_t scene_12_sprites[] = {
    TO_FAR_PTR_T(spritesheet_23),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_16),
    TO_FAR_PTR_T(spritesheet_24),
    TO_FAR_PTR_T(spritesheet_5),
    TO_FAR_PTR_T(spritesheet_21),
    TO_FAR_PTR_T(spritesheet_25),
    TO_FAR_PTR_T(spritesheet_14),
    TO_FAR_PTR_T(spritesheet_1),
    TO_FAR_PTR_T(spritesheet_4)
};
