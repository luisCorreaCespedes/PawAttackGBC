#pragma bank 255

// Scene: FIN DEMO

#include "gbs_types.h"
#include "data/background_5.h"
#include "data/scene_38_collisions.h"
#include "data/palette_3.h"
#include "data/palette_26.h"
#include "data/spritesheet_10.h"
#include "data/script_s38_init.h"

BANKREF(scene_38)

const struct scene_t scene_38 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_5),
    .collisions = TO_FAR_PTR_T(scene_38_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_3),
    .sprite_palette = TO_FAR_PTR_T(palette_26),
    .player_sprite = TO_FAR_PTR_T(spritesheet_10),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(script_s38_init)
};
