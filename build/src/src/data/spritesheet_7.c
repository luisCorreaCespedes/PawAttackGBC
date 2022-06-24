#pragma bank 255
// SpriteSheet: Balas Ave
  
#include "gbs_types.h"
#include "data/tileset_22.h"

BANKREF(spritesheet_7)

#define SPRITE_7_STATE_DEFAULT 0

const metasprite_t spritesheet_7_metasprite_0[]  = {
    { 0, 0, 0, 6 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_7_metasprites[] = {
    spritesheet_7_metasprite_0
};

const struct animation_t spritesheet_7_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD spritesheet_7_animations_lookup[] = {
    SPRITE_7_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_7 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_7_metasprites,
    .animations = spritesheet_7_animations,
    .animations_lookup = spritesheet_7_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 1,
        .right = 4,
        .top = -3
    },
    .tileset = TO_FAR_PTR_T(tileset_22),
    .cgb_tileset = { NULL, NULL }
};
