#pragma bank 255

// Scene: Level 2-3

#include "gbs_types.h"
#include "data/background_27.h"
#include "data/scene_18_collisions.h"
#include "data/palette_18.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/scene_18_actors.h"
#include "data/scene_18_triggers.h"
#include "data/scene_18_sprites.h"
#include "data/scene_18_projectiles.h"
#include "data/script_s18_init.h"
#include "data/script_s18_p_hit1.h"

BANKREF(scene_18)

const struct scene_t scene_18 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_27),
    .collisions = TO_FAR_PTR_T(scene_18_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_18),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 4,
    .n_triggers = 1,
    .n_sprites = 5,
    .n_projectiles = 1,
    .actors = TO_FAR_PTR_T(scene_18_actors),
    .triggers = TO_FAR_PTR_T(scene_18_triggers),
    .sprites = TO_FAR_PTR_T(scene_18_sprites),
    .projectiles = TO_FAR_PTR_T(scene_18_projectiles),
    .script_init = TO_FAR_PTR_T(script_s18_init),
    .script_p_hit1 = TO_FAR_PTR_T(script_s18_p_hit1)
};
