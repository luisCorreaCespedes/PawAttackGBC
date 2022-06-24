#pragma bank 255

// Scene: Game Over (Lv 5 6 7 8)

#include "gbs_types.h"
#include "data/background_7.h"
#include "data/scene_6_collisions.h"
#include "data/palette_6.h"
#include "data/palette_24.h"
#include "data/spritesheet_10.h"
#include "data/scene_6_actors.h"
#include "data/scene_6_sprites.h"
#include "data/script_s6_init.h"

BANKREF(scene_6)

const struct scene_t scene_6 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_7),
    .collisions = TO_FAR_PTR_T(scene_6_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_6),
    .sprite_palette = TO_FAR_PTR_T(palette_24),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 1,
    .n_triggers = 0,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_6_actors),
    .sprites = TO_FAR_PTR_T(scene_6_sprites),
    .script_init = TO_FAR_PTR_T(script_s6_init)
};
