#pragma bank 255
// SpriteSheet: Balas Cactubis
  
#include "gbs_types.h"
#include "data/tileset_23.h"

BANKREF(spritesheet_8)

#define SPRITE_8_STATE_DEFAULT 0

const metasprite_t spritesheet_8_metasprite_0[]  = {
    { 0, 0, 0, 2 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_8_metasprites[] = {
    spritesheet_8_metasprite_0
};

const struct animation_t spritesheet_8_animations[] = {
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

const UWORD spritesheet_8_animations_lookup[] = {
    SPRITE_8_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_8 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_8_metasprites,
    .animations = spritesheet_8_animations,
    .animations_lookup = spritesheet_8_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 1,
        .right = 9,
        .top = -3
    },
    .tileset = TO_FAR_PTR_T(tileset_23),
    .cgb_tileset = { NULL, NULL }
};
