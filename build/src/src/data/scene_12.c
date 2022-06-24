#pragma bank 255

// Scene: Level 03

#include "gbs_types.h"
#include "data/background_24.h"
#include "data/scene_12_collisions.h"
#include "data/palette_12.h"
#include "data/palette_30.h"
#include "data/spritesheet_10.h"
#include "data/scene_12_actors.h"
#include "data/scene_12_triggers.h"
#include "data/scene_12_sprites.h"
#include "data/scene_12_projectiles.h"
#include "data/script_s12_init.h"
#include "data/script_s12_p_hit1.h"

BANKREF(scene_12)

const struct scene_t scene_12 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_24),
    .collisions = TO_FAR_PTR_T(scene_12_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_12),
    .sprite_palette = TO_FAR_PTR_T(palette_30),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 20,
    .n_triggers = 1,
    .n_sprites = 10,
    .n_projectiles = 4,
    .actors = TO_FAR_PTR_T(scene_12_actors),
    .triggers = TO_FAR_PTR_T(scene_12_triggers),
    .sprites = TO_FAR_PTR_T(scene_12_sprites),
    .projectiles = TO_FAR_PTR_T(scene_12_projectiles),
    .script_init = TO_FAR_PTR_T(script_s12_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s12_p_hit1)
};
