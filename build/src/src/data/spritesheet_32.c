#pragma bank 255
// SpriteSheet: Cactubis Arubis
  
#include "gbs_types.h"
#include "data/tileset_47.h"

BANKREF(spritesheet_32)

#define SPRITE_32_STATE_DEFAULT 0

const metasprite_t spritesheet_32_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_32_metasprite_1[]  = {
    { 0, 16, 0, 2 }, { -16, 0, 2, 2 }, { 16, -8, 4, 2 }, { -16, 0, 6, 2 }, { 16, -8, 8, 2 }, { -16, 0, 10, 2 }, { 16, -8, 12, 2 }, { -16, 0, 14, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_32_metasprite_2[]  = {
    { 0, 16, 16, 2 }, { -16, 0, 18, 2 }, { 16, -8, 20, 2 }, { -16, 0, 22, 2 }, { 16, -8, 24, 2 }, { -16, 0, 26, 2 }, { 16, -8, 28, 2 }, { -16, 0, 30, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_32_metasprite_3[]  = {
    { 0, -8, 0, 34 }, { -16, 0, 2, 34 }, { 16, 8, 4, 34 }, { -16, 0, 6, 34 }, { 16, 8, 8, 34 }, { -16, 0, 10, 34 }, { 16, 8, 12, 34 }, { -16, 0, 14, 34 },
    {metasprite_end}
};

const metasprite_t spritesheet_32_metasprite_4[]  = {
    { 0, -8, 16, 34 }, { -16, 0, 18, 34 }, { 16, 8, 20, 34 }, { -16, 0, 22, 34 }, { 16, 8, 24, 34 }, { -16, 0, 26, 34 }, { 16, 8, 28, 34 }, { -16, 0, 30, 34 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_32_metasprites[] = {
    spritesheet_32_metasprite_0,
    spritesheet_32_metasprite_1,
    spritesheet_32_metasprite_2,
    spritesheet_32_metasprite_3,
    spritesheet_32_metasprite_4
};

const struct animation_t spritesheet_32_animations[] = {
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

const UWORD spritesheet_32_animations_lookup[] = {
    SPRITE_32_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_32 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = spritesheet_32_metasprites,
    .animations = spritesheet_32_animations,
    .animations_lookup = spritesheet_32_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 7,
        .right = 12,
        .top = -23
    },
    .tileset = TO_FAR_PTR_T(tileset_47),
    .cgb_tileset = { NULL, NULL }
};
