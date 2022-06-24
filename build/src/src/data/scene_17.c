#pragma bank 255

// Scene: INTRO Level 2-3

#include "gbs_types.h"
#include "data/background_13.h"
#include "data/scene_17_collisions.h"
#include "data/palette_17.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/script_s17_init.h"

BANKREF(scene_17)

const struct scene_t scene_17 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_13),
    .collisions = TO_FAR_PTR_T(scene_17_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_17),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s17_init)
};
