#pragma bank 255

// Scene: Level 01

#include "gbs_types.h"
#include "data/background_22.h"
#include "data/scene_8_collisions.h"
#include "data/palette_8.h"
#include "data/palette_28.h"
#include "data/spritesheet_10.h"
#include "data/scene_8_actors.h"
#include "data/scene_8_triggers.h"
#include "data/scene_8_sprites.h"
#include "data/scene_8_projectiles.h"
#include "data/script_s8_init.h"
#include "data/script_s8_p_hit1.h"

BANKREF(scene_8)

const struct scene_t scene_8 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_22),
    .collisions = TO_FAR_PTR_T(scene_8_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_8),
    .sprite_palette = TO_FAR_PTR_T(palette_28),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 18,
    .n_triggers = 1,
    .n_sprites = 8,
    .n_projectiles = 1,
    .actors = TO_FAR_PTR_T(scene_8_actors),
    .triggers = TO_FAR_PTR_T(scene_8_triggers),
    .sprites = TO_FAR_PTR_T(scene_8_sprites),
    .projectiles = TO_FAR_PTR_T(scene_8_projectiles),
    .script_init = TO_FAR_PTR_T(script_s8_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s8_p_hit1)
};
