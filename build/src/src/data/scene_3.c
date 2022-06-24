#pragma bank 255

// Scene: Menu

#include "gbs_types.h"
#include "data/background_35.h"
#include "data/scene_3_collisions.h"
#include "data/palette_3.h"
#include "data/palette_26.h"
#include "data/spritesheet_10.h"
#include "data/scene_3_actors.h"
#include "data/scene_3_sprites.h"
#include "data/script_s3_init.h"

BANKREF(scene_3)

const struct scene_t scene_3 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_35),
    .collisions = TO_FAR_PTR_T(scene_3_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_3),
    .sprite_palette = TO_FAR_PTR_T(palette_26),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 1,
    .n_triggers = 0,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_3_actors),
    .sprites = TO_FAR_PTR_T(scene_3_sprites),
    .script_init = TO_FAR_PTR_T(script_s3_init)
};
