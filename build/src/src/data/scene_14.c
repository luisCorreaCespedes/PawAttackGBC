#pragma bank 255

// Scene: Level 04

#include "gbs_types.h"
#include "data/background_25.h"
#include "data/scene_14_collisions.h"
#include "data/palette_14.h"
#include "data/palette_28.h"
#include "data/spritesheet_10.h"
#include "data/scene_14_actors.h"
#include "data/scene_14_triggers.h"
#include "data/scene_14_sprites.h"
#include "data/scene_14_projectiles.h"
#include "data/script_s14_init.h"
#include "data/script_s14_p_hit1.h"

BANKREF(scene_14)

const struct scene_t scene_14 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_25),
    .collisions = TO_FAR_PTR_T(scene_14_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_14),
    .sprite_palette = TO_FAR_PTR_T(palette_28),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 20,
    .n_triggers = 1,
    .n_sprites = 11,
    .n_projectiles = 2,
    .actors = TO_FAR_PTR_T(scene_14_actors),
    .triggers = TO_FAR_PTR_T(scene_14_triggers),
    .sprites = TO_FAR_PTR_T(scene_14_sprites),
    .projectiles = TO_FAR_PTR_T(scene_14_projectiles),
    .script_init = TO_FAR_PTR_T(script_s14_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s14_p_hit1)
};
