#pragma bank 255
// SpriteSheet: Caracol Cueva
  
#include "gbs_types.h"
#include "data/tileset_40.h"

BANKREF(spritesheet_25)

#define SPRITE_25_STATE_DEFAULT 0

const metasprite_t spritesheet_25_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_25_metasprite_1[]  = {
    { 0, 5, 0, 6 }, { 0, -8, 2, 6 }, { 0, 11, 4, 5 }, { 0, -8, 6, 5 },
    {metasprite_end}
};

const metasprite_t spritesheet_25_metasprite_2[]  = {
    { 1, 5, 0, 6 }, { 0, -8, 2, 6 }, { -1, 11, 8, 5 }, { 0, -8, 10, 5 },
    {metasprite_end}
};

const metasprite_t spritesheet_25_metasprite_3[]  = {
    { 0, 3, 0, 38 }, { 0, 8, 2, 38 }, { 0, -11, 4, 37 }, { 0, 8, 6, 37 },
    {metasprite_end}
};

const metasprite_t spritesheet_25_metasprite_4[]  = {
    { 1, 3, 0, 38 }, { 0, 8, 2, 38 }, { -1, -11, 8, 37 }, { 0, 8, 10, 37 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_25_metasprites[] = {
    spritesheet_25_metasprite_0,
    spritesheet_25_metasprite_1,
    spritesheet_25_metasprite_2,
    spritesheet_25_metasprite_3,
    spritesheet_25_metasprite_4
};

const struct animation_t spritesheet_25_animations[] = {
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

const UWORD spritesheet_25_animations_lookup[] = {
    SPRITE_25_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_25 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_25_metasprites,
    .animations = spritesheet_25_animations,
    .animations_lookup = spritesheet_25_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 7,
        .right = 14,
        .top = -5
    },
    .tileset = TO_FAR_PTR_T(tileset_40),
    .cgb_tileset = { NULL, NULL }
};
