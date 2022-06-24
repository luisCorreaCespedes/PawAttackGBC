#pragma bank 255

// Scene: INTRO Level 3-1

#include "gbs_types.h"
#include "data/background_14.h"
#include "data/scene_21_collisions.h"
#include "data/palette_9.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/script_s21_init.h"

BANKREF(scene_21)

const struct scene_t scene_21 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_14),
    .collisions = TO_FAR_PTR_T(scene_21_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_9),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s21_init)
};
