#pragma bank 255

// Scene: INTRO Level 05

#include "gbs_types.h"
#include "data/background_12.h"
#include "data/scene_15_collisions.h"
#include "data/palette_15.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/script_s15_init.h"

BANKREF(scene_15)

const struct scene_t scene_15 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_12),
    .collisions = TO_FAR_PTR_T(scene_15_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_15),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s15_init)
};
