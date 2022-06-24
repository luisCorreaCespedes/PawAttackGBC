#pragma bank 255

// Scene: Boss Cactubis Arubis

#include "gbs_types.h"
#include "data/background_0.h"
#include "data/scene_20_collisions.h"
#include "data/palette_19.h"
#include "data/palette_32.h"
#include "data/spritesheet_10.h"
#include "data/scene_20_actors.h"
#include "data/scene_20_triggers.h"
#include "data/scene_20_sprites.h"
#include "data/scene_20_projectiles.h"
#include "data/script_s20_init.h"
#include "data/script_s20_p_hit1.h"

BANKREF(scene_20)

const struct scene_t scene_20 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_0),
    .collisions = TO_FAR_PTR_T(scene_20_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_19),
    .sprite_palette = TO_FAR_PTR_T(palette_32),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 6,
    .n_triggers = 1,
    .n_sprites = 9,
    .n_projectiles = 3,
    .actors = TO_FAR_PTR_T(scene_20_actors),
    .triggers = TO_FAR_PTR_T(scene_20_triggers),
    .sprites = TO_FAR_PTR_T(scene_20_sprites),
    .projectiles = TO_FAR_PTR_T(scene_20_projectiles),
    .script_init = TO_FAR_PTR_T(script_s20_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s20_p_hit1)
};
