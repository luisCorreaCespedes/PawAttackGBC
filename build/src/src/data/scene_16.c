#pragma bank 255

// Scene: Level 05

#include "gbs_types.h"
#include "data/background_26.h"
#include "data/scene_16_collisions.h"
#include "data/palette_16.h"
#include "data/palette_31.h"
#include "data/spritesheet_10.h"
#include "data/scene_16_actors.h"
#include "data/scene_16_triggers.h"
#include "data/scene_16_sprites.h"
#include "data/scene_16_projectiles.h"
#include "data/script_s16_init.h"
#include "data/script_s16_p_hit1.h"

BANKREF(scene_16)

const struct scene_t scene_16 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_26),
    .collisions = TO_FAR_PTR_T(scene_16_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_16),
    .sprite_palette = TO_FAR_PTR_T(palette_31),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 19,
    .n_triggers = 1,
    .n_sprites = 9,
    .n_projectiles = 2,
    .actors = TO_FAR_PTR_T(scene_16_actors),
    .triggers = TO_FAR_PTR_T(scene_16_triggers),
    .sprites = TO_FAR_PTR_T(scene_16_sprites),
    .projectiles = TO_FAR_PTR_T(scene_16_projectiles),
    .script_init = TO_FAR_PTR_T(script_s16_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s16_p_hit1)
};
