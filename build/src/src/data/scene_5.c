#pragma bank 255

// Scene: Creditos

#include "gbs_types.h"
#include "data/background_4.h"
#include "data/scene_5_collisions.h"
#include "data/palette_5.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/script_s5_init.h"

BANKREF(scene_5)

const struct scene_t scene_5 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_4),
    .collisions = TO_FAR_PTR_T(scene_5_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_5),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s5_init)
};
