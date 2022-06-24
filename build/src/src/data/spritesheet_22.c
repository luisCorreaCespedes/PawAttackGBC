#pragma bank 255
// SpriteSheet: Escorpion
  
#include "gbs_types.h"
#include "data/tileset_37.h"

BANKREF(spritesheet_22)

#define SPRITE_22_STATE_DEFAULT 0

const metasprite_t spritesheet_22_metasprite_0[]  = {
    { 0, 8, 14, 0 }, { 0, -8, 16, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_22_metasprite_1[]  = {
    { 0, 8, 0, 2 }, { 0, -8, 2, 2 }, { 0, -8, 4, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_22_metasprite_2[]  = {
    { 0, 8, 6, 2 }, { 0, -8, 8, 2 }, { 0, -8, 10, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_22_metasprite_3[]  = {
    { 0, 8, 18, 0 }, { 0, -8, 20, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_22_metasprite_4[]  = {
    { 0, 8, 12, 2 }, { 0, -8, 14, 2 }, { 0, -8, 16, 2 },
    {metasprite_end}
};

const metasprite_t spritesheet_22_metasprite_5[]  = {
    { 0, 8, 18, 2 }, { 0, -8, 20, 2 }, { 0, -8, 22, 2 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_22_metasprites[] = {
    spritesheet_22_metasprite_0,
    spritesheet_22_metasprite_1,
    spritesheet_22_metasprite_2,
    spritesheet_22_metasprite_3,
    spritesheet_22_metasprite_4,
    spritesheet_22_metasprite_5
};

const struct animation_t spritesheet_22_animations[] = {
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

const UWORD spritesheet_22_animations_lookup[] = {
    SPRITE_22_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_22 = {
    .n_metasprites = 6,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_22_metasprites,
    .animations = spritesheet_22_animations,
    .animations_lookup = spritesheet_22_animations_lookup,
    .bounds = {
        .left = -6,
        .bottom = 7,
        .right = 13,
        .top = -5
    },
    .tileset = TO_FAR_PTR_T(tileset_37),
    .cgb_tileset = { NULL, NULL }
};
