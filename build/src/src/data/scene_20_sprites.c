#pragma bank 255

// Scene: Boss Cactubis Arubis
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_31.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_32.h"
#include "data/spritesheet_33.h"
#include "data/spritesheet_14.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_8.h"
#include "data/spritesheet_9.h"

BANKREF(scene_20_sprites)

const far_ptr_t scene_20_sprites[] = {
    TO_FAR_PTR_T(spritesheet_31),
    TO_FAR_PTR_T(spritesheet_13),
    TO_FAR_PTR_T(spritesheet_16),
    TO_FAR_PTR_T(spritesheet_32),
    TO_FAR_PTR_T(spritesheet_33),
    TO_FAR_PTR_T(spritesheet_14),
    TO_FAR_PTR_T(spritesheet_1),
    TO_FAR_PTR_T(spritesheet_8),
    TO_FAR_PTR_T(spritesheet_9)
};
