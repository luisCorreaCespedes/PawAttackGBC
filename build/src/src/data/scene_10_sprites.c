#pragma bank 255

// Scene: Level 02
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_19.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_14.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_20.h"
#include "data/spritesheet_21.h"
#include "data/spritesheet_18.h"
#include "data/spritesheet_22.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_3.h"

BANKREF(scene_10_sprites)

const far_ptr_t scene_10_sprites[] = {
    TO_FAR_PTR_T(spritesheet_19),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_14),
    TO_FAR_PTR_T(spritesheet_16),
    TO_FAR_PTR_T(spritesheet_20),
    TO_FAR_PTR_T(spritesheet_21),
    TO_FAR_PTR_T(spritesheet_18),
    TO_FAR_PTR_T(spritesheet_22),
    TO_FAR_PTR_T(spritesheet_1),
    TO_FAR_PTR_T(spritesheet_3)
};
