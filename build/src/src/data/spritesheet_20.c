#pragma bank 255
// SpriteSheet: Serpiente
  
#include "gbs_types.h"
#include "data/tileset_35.h"

BANKREF(spritesheet_20)

#define SPRITE_20_STATE_DEFAULT 0

const metasprite_t spritesheet_20_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_20_metasprite_1[]  = {
    { 0, 9, 0, 1 }, { 0, -1, 2, 3 }, { 0, -8, 4, 3 },
    {metasprite_end}
};

const metasprite_t spritesheet_20_metasprite_2[]  = {
    { 1, 9, 6, 1 }, { -1, -1, 8, 3 }, { 0, -8, 10, 3 },
    {metasprite_end}
};

const metasprite_t spritesheet_20_metasprite_3[]  = {
    { 0, -1, 0, 33 }, { 0, 1, 2, 35 }, { 0, 8, 4, 35 },
    {metasprite_end}
};

const metasprite_t spritesheet_20_metasprite_4[]  = {
    { 1, -1, 6, 33 }, { -1, 1, 8, 35 }, { 0, 8, 10, 35 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_20_metasprites[] = {
    spritesheet_20_metasprite_0,
    spritesheet_20_metasprite_1,
    spritesheet_20_metasprite_2,
    spritesheet_20_metasprite_3,
    spritesheet_20_metasprite_4
};

const struct animation_t spritesheet_20_animations[] = {
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

const UWORD spritesheet_20_animations_lookup[] = {
    SPRITE_20_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_20 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_20_metasprites,
    .animations = spritesheet_20_animations,
    .animations_lookup = spritesheet_20_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 7,
        .right = 13,
        .top = -7
    },
    .tileset = TO_FAR_PTR_T(tileset_35),
    .cgb_tileset = { NULL, NULL }
};
