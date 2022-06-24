#pragma bank 255

// Scene: INTRO Boss 4 (EN PROCESO)

#include "gbs_types.h"
#include "data/background_21.h"
#include "data/scene_35_collisions.h"
#include "data/palette_21.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"

BANKREF(scene_35)

const struct scene_t scene_35 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_21),
    .collisions = TO_FAR_PTR_T(scene_35_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_21),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0
};
