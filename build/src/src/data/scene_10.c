#pragma bank 255

// Scene: Level 02

#include "gbs_types.h"
#include "data/background_23.h"
#include "data/scene_10_collisions.h"
#include "data/palette_10.h"
#include "data/palette_29.h"
#include "data/spritesheet_10.h"
#include "data/scene_10_actors.h"
#include "data/scene_10_triggers.h"
#include "data/scene_10_sprites.h"
#include "data/scene_10_projectiles.h"
#include "data/script_s10_init.h"
#include "data/script_s10_p_hit1.h"

BANKREF(scene_10)

const struct scene_t scene_10 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_23),
    .collisions = TO_FAR_PTR_T(scene_10_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_10),
    .sprite_palette = TO_FAR_PTR_T(palette_29),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 20,
    .n_triggers = 1,
    .n_sprites = 10,
    .n_projectiles = 3,
    .actors = TO_FAR_PTR_T(scene_10_actors),
    .triggers = TO_FAR_PTR_T(scene_10_triggers),
    .sprites = TO_FAR_PTR_T(scene_10_sprites),
    .projectiles = TO_FAR_PTR_T(scene_10_projectiles),
    .script_init = TO_FAR_PTR_T(script_s10_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s10_p_hit1)
};
