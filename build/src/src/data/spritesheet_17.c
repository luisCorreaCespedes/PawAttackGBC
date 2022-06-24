#pragma bank 255
// SpriteSheet: Abeja
  
#include "gbs_types.h"
#include "data/tileset_32.h"

BANKREF(spritesheet_17)

#define SPRITE_17_STATE_DEFAULT 0

const metasprite_t spritesheet_17_metasprite_0[]  = {
    { -1, 10, 2, 37 }, { 0, -8, 0, 37 }, { 1, 6, 6, 36 }, { 0, -8, 4, 36 },
    {metasprite_end}
};

const metasprite_t spritesheet_17_metasprite_1[]  = {
    { 0, 10, 2, 37 }, { 0, -8, 0, 37 }, { 0, 6, 10, 36 }, { 0, -8, 8, 36 },
    {metasprite_end}
};

const metasprite_t spritesheet_17_metasprite_2[]  = {
    { -1, 6, 0, 5 }, { 0, -8, 2, 5 }, { 1, 10, 4, 4 }, { 0, -8, 6, 4 },
    {metasprite_end}
};

const metasprite_t spritesheet_17_metasprite_3[]  = {
    { 0, 6, 0, 5 }, { 0, -8, 2, 5 }, { 0, 10, 8, 4 }, { 0, -8, 10, 4 },
    {metasprite_end}
};

const metasprite_t spritesheet_17_metasprite_4[]  = {
    { -1, 2, 0, 37 }, { 0, 8, 2, 37 }, { 1, -10, 4, 36 }, { 0, 8, 6, 36 },
    {metasprite_end}
};

const metasprite_t spritesheet_17_metasprite_5[]  = {
    { 0, 2, 0, 37 }, { 0, 8, 2, 37 }, { 0, -10, 8, 36 }, { 0, 8, 10, 36 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_17_metasprites[] = {
    spritesheet_17_metasprite_0,
    spritesheet_17_metasprite_1,
    spritesheet_17_metasprite_2,
    spritesheet_17_metasprite_3,
    spritesheet_17_metasprite_1,
    spritesheet_17_metasprite_0,
    spritesheet_17_metasprite_4,
    spritesheet_17_metasprite_5
};

const struct animation_t spritesheet_17_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 6,
        .end = 7
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
        .start = 4,
        .end = 5
    },
    {
        .start = 6,
        .end = 7
    }
};

const UWORD spritesheet_17_animations_lookup[] = {
    SPRITE_17_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_17 = {
    .n_metasprites = 8,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_17_metasprites,
    .animations = spritesheet_17_animations,
    .animations_lookup = spritesheet_17_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 5,
        .right = 13,
        .top = -5
    },
    .tileset = TO_FAR_PTR_T(tileset_32),
    .cgb_tileset = { NULL, NULL }
};
