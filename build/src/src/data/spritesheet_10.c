#pragma bank 255
// SpriteSheet: Gato
  
#include "gbs_types.h"
#include "data/tileset_25.h"

BANKREF(spritesheet_10)

#define SPRITE_10_STATE_DEFAULT 0

const metasprite_t spritesheet_10_metasprite_0[]  = {
    { 0, -1, 4, 32 }, { 0, 8, 6, 32 }, { 0, -6, 8, 32 }, { 0, 8, 10, 32 },
    {metasprite_end}
};

const metasprite_t spritesheet_10_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_10_metasprite_2[]  = {
    { 0, 9, 4, 0 }, { 0, -8, 6, 0 }, { 0, 6, 8, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_10_metasprite_3[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t spritesheet_10_metasprite_4[]  = {
    { 0, 8, 12, 0 }, { 0, -8, 14, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_10_metasprite_5[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_10_metasprite_6[]  = {
    { 0, 0, 12, 32 }, { 0, 8, 14, 32 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_10_metasprites[] = {
    spritesheet_10_metasprite_0,
    spritesheet_10_metasprite_1,
    spritesheet_10_metasprite_2,
    spritesheet_10_metasprite_3,
    spritesheet_10_metasprite_4,
    spritesheet_10_metasprite_1,
    spritesheet_10_metasprite_1,
    spritesheet_10_metasprite_4,
    spritesheet_10_metasprite_5,
    spritesheet_10_metasprite_3,
    spritesheet_10_metasprite_6
};

const struct animation_t spritesheet_10_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
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
        .start = 6,
        .end = 7
    },
    {
        .start = 8,
        .end = 8
    },
    {
        .start = 9,
        .end = 10
    }
};

const UWORD spritesheet_10_animations_lookup[] = {
    SPRITE_10_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_10 = {
    .n_metasprites = 11,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_10_metasprites,
    .animations = spritesheet_10_animations,
    .animations_lookup = spritesheet_10_animations_lookup,
    .bounds = {
        .left = 4,
        .bottom = 7,
        .right = 12,
        .top = -6
    },
    .tileset = TO_FAR_PTR_T(tileset_25),
    .cgb_tileset = { NULL, NULL }
};
