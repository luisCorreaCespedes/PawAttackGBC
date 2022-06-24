#pragma bank 255
// SpriteSheet: Murciélago
  
#include "gbs_types.h"
#include "data/tileset_39.h"

BANKREF(spritesheet_24)

#define SPRITE_24_STATE_DEFAULT 0

const metasprite_t spritesheet_24_metasprite_0[]  = {
    { 0, 0, 0, 1 }, { 0, 12, 12, 34 }, { 0, -8, 10, 34 }, { 0, -8, 8, 34 },
    {metasprite_end}
};

const metasprite_t spritesheet_24_metasprite_1[]  = {
    { 0, 0, 0, 1 }, { 0, 12, 6, 34 }, { 0, -8, 4, 34 }, { 0, -8, 2, 34 },
    {metasprite_end}
};

const metasprite_t spritesheet_24_metasprite_2[]  = {
    { 0, 4, 0, 1 }, { 0, 8, 2, 2 }, { 0, -8, 4, 2 }, { 0, -8, 6, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_24_metasprite_3[]  = {
    { 0, 4, 0, 1 }, { 0, 8, 8, 2 }, { 0, -8, 10, 2 }, { 0, -8, 12, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_24_metasprite_4[]  = {
    { 0, 4, 0, 33 }, { 0, -8, 2, 34 }, { 0, 8, 4, 34 }, { 0, 8, 6, 34 },
    {metasprite_end}
};

const metasprite_t spritesheet_24_metasprite_5[]  = {
    { 0, 4, 0, 33 }, { 0, -8, 8, 34 }, { 0, 8, 10, 34 }, { 0, 8, 12, 34 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_24_metasprites[] = {
    spritesheet_24_metasprite_0,
    spritesheet_24_metasprite_1,
    spritesheet_24_metasprite_2,
    spritesheet_24_metasprite_3,
    spritesheet_24_metasprite_4,
    spritesheet_24_metasprite_5
};

const struct animation_t spritesheet_24_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 4,
        .end = 5
    }
};

const UWORD spritesheet_24_animations_lookup[] = {
    SPRITE_24_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_24 = {
    .n_metasprites = 6,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_24_metasprites,
    .animations = spritesheet_24_animations,
    .animations_lookup = spritesheet_24_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 5,
        .right = 14,
        .top = -6
    },
    .tileset = TO_FAR_PTR_T(tileset_39),
    .cgb_tileset = { NULL, NULL }
};
