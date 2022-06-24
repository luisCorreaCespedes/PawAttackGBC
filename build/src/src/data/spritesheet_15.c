#pragma bank 255
// SpriteSheet: Caracol
  
#include "gbs_types.h"
#include "data/tileset_30.h"

BANKREF(spritesheet_15)

#define SPRITE_15_STATE_DEFAULT 0

const metasprite_t spritesheet_15_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_15_metasprite_1[]  = {
    { 2, 5, 0, 3 }, { 0, -8, 2, 3 }, { -2, 11, 4, 2 }, { 0, -8, 6, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_15_metasprite_2[]  = {
    { 3, 5, 0, 3 }, { 0, -8, 2, 3 }, { -3, 11, 8, 2 }, { 0, -8, 10, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_15_metasprite_3[]  = {
    { 2, 3, 0, 35 }, { 0, 8, 2, 35 }, { -2, -11, 4, 34 }, { 0, 8, 6, 34 },
    {metasprite_end}
};

const metasprite_t spritesheet_15_metasprite_4[]  = {
    { 3, 3, 0, 35 }, { 0, 8, 2, 35 }, { -3, -11, 8, 34 }, { 0, 8, 10, 34 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_15_metasprites[] = {
    spritesheet_15_metasprite_0,
    spritesheet_15_metasprite_1,
    spritesheet_15_metasprite_2,
    spritesheet_15_metasprite_3,
    spritesheet_15_metasprite_4
};

const struct animation_t spritesheet_15_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 2
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 3,
        .end = 4
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
        .start = 0,
        .end = 0
    },
    {
        .start = 3,
        .end = 4
    }
};

const UWORD spritesheet_15_animations_lookup[] = {
    SPRITE_15_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_15 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_15_metasprites,
    .animations = spritesheet_15_animations,
    .animations_lookup = spritesheet_15_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 7,
        .right = 14,
        .top = -3
    },
    .tileset = TO_FAR_PTR_T(tileset_30),
    .cgb_tileset = { NULL, NULL }
};
