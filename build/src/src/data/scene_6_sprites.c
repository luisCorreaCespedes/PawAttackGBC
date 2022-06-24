#pragma bank 255

// Scene: Game Over (Lv 5 6 7 8)
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_11.h"

BANKREF(scene_6_sprites)

const far_ptr_t scene_6_sprites[] = {
    TO_FAR_PTR_T(spritesheet_11)
};
