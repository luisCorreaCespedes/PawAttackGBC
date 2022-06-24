#pragma bank 255

// Scene: Level 4-1

#include "gbs_types.h"
#include "data/background_31.h"
#include "data/scene_30_collisions.h"
#include "data/palette_16.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/scene_30_actors.h"
#include "data/scene_30_triggers.h"
#include "data/scene_30_sprites.h"
#include "data/scene_30_projectiles.h"
#include "data/script_s30_init.h"

BANKREF(scene_30)

const struct scene_t scene_30 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_31),
    .collisions = TO_FAR_PTR_T(scene_30_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_16),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 2,
    .n_triggers = 1,
    .n_sprites = 3,
    .n_projectiles = 1,
    .actors = TO_FAR_PTR_T(scene_30_actors),
    .triggers = TO_FAR_PTR_T(scene_30_triggers),
    .sprites = TO_FAR_PTR_T(scene_30_sprites),
    .projectiles = TO_FAR_PTR_T(scene_30_projectiles),
    .script_init = TO_FAR_PTR_T(script_s30_init)
};
