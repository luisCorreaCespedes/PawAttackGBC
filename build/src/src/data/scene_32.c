#pragma bank 255

// Scene: Level 4-2

#include "gbs_types.h"
#include "data/background_32.h"
#include "data/scene_32_collisions.h"
#include "data/palette_14.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/scene_32_actors.h"
#include "data/scene_32_triggers.h"
#include "data/scene_32_sprites.h"
#include "data/scene_32_projectiles.h"
#include "data/script_s32_init.h"

BANKREF(scene_32)

const struct scene_t scene_32 = {
    .width = 220,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_32),
    .collisions = TO_FAR_PTR_T(scene_32_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_14),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 2,
    .n_triggers = 1,
    .n_sprites = 3,
    .n_projectiles = 1,
    .actors = TO_FAR_PTR_T(scene_32_actors),
    .triggers = TO_FAR_PTR_T(scene_32_triggers),
    .sprites = TO_FAR_PTR_T(scene_32_sprites),
    .projectiles = TO_FAR_PTR_T(scene_32_projectiles),
    .script_init = TO_FAR_PTR_T(script_s32_init)
};
