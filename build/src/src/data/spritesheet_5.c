#pragma bank 255
// SpriteSheet: Araña
  
#include "gbs_types.h"
#include "data/tileset_20.h"

BANKREF(spritesheet_5)

#define SPRITE_5_STATE_DEFAULT 0

const metasprite_t spritesheet_5_metasprite_0[]  = {
    { 0, 8, 10, 32 }, { 0, -8, 8, 32 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_1[]  = {
    { 2, 10, 0, 4 }, { -2, 2, 2, 3 }, { 0, -8, 4, 3 }, { 0, -8, 6, 3 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_2[]  = {
    { 3, 10, 0, 4 }, { -3, 2, 8, 3 }, { 0, -8, 10, 3 }, { 0, -8, 12, 3 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_3[]  = {
    { 0, 8, 2, 32 }, { 0, -8, 12, 32 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_4[]  = {
    { 2, -2, 0, 36 }, { -2, -2, 2, 35 }, { 0, 8, 4, 35 }, { 0, 8, 6, 35 },
    {metasprite_end}
};

const metasprite_t spritesheet_5_metasprite_5[]  = {
    { 3, -2, 0, 36 }, { -3, -2, 8, 35 }, { 0, 8, 10, 35 }, { 0, 8, 12, 35 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_5_metasprites[] = {
    spritesheet_5_metasprite_0,
    spritesheet_5_metasprite_1,
    spritesheet_5_metasprite_2,
    spritesheet_5_metasprite_3,
    spritesheet_5_metasprite_4,
    spritesheet_5_metasprite_5
};

const struct animation_t spritesheet_5_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    }
};

const UWORD spritesheet_5_animations_lookup[] = {
    SPRITE_5_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_5 = {
    .n_metasprites = 6,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_5_metasprites,
    .animations = spritesheet_5_animations,
    .animations_lookup = spritesheet_5_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 17,
        .top = -1
    },
    .tileset = TO_FAR_PTR_T(tileset_20),
    .cgb_tileset = { NULL, NULL }
};
