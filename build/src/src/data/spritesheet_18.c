#pragma bank 255
// SpriteSheet: Ave
  
#include "gbs_types.h"
#include "data/tileset_33.h"

BANKREF(spritesheet_18)

#define SPRITE_18_STATE_DEFAULT 0

const metasprite_t spritesheet_18_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_18_metasprite_1[]  = {
    { 1, 7, 0, 0 }, { -1, 1, 2, 6 }, { 0, -8, 4, 6 },
    {metasprite_end}
};

const metasprite_t spritesheet_18_metasprite_2[]  = {
    { 0, 7, 0, 0 }, { 0, 1, 6, 6 }, { 0, -8, 8, 6 },
    {metasprite_end}
};

const metasprite_t spritesheet_18_metasprite_3[]  = {
    { 1, 1, 0, 32 }, { -1, -1, 2, 38 }, { 0, 8, 4, 38 },
    {metasprite_end}
};

const metasprite_t spritesheet_18_metasprite_4[]  = {
    { 0, 1, 0, 32 }, { 0, -1, 6, 38 }, { 0, 8, 8, 38 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_18_metasprites[] = {
    spritesheet_18_metasprite_0,
    spritesheet_18_metasprite_1,
    spritesheet_18_metasprite_2,
    spritesheet_18_metasprite_3,
    spritesheet_18_metasprite_4
};

const struct animation_t spritesheet_18_animations[] = {
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

const UWORD spritesheet_18_animations_lookup[] = {
    SPRITE_18_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_18 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_18_metasprites,
    .animations = spritesheet_18_animations,
    .animations_lookup = spritesheet_18_animations_lookup,
    .bounds = {
        .left = 2,
        .bottom = 5,
        .right = 14,
        .top = -6
    },
    .tileset = TO_FAR_PTR_T(tileset_33),
    .cgb_tileset = { NULL, NULL }
};
