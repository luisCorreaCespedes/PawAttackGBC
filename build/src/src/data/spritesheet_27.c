#pragma bank 255
// SpriteSheet: Pinguino
  
#include "gbs_types.h"
#include "data/tileset_42.h"

BANKREF(spritesheet_27)

#define SPRITE_27_STATE_DEFAULT 0

const metasprite_t spritesheet_27_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_27_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 }, { 0, 8, 4, 7 }, { 0, -8, 6, 7 },
    {metasprite_end}
};

const metasprite_t spritesheet_27_metasprite_2[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 10, 0 }, { 0, 8, 12, 7 }, { 0, -8, 14, 7 },
    {metasprite_end}
};

const metasprite_t spritesheet_27_metasprite_3[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 }, { 0, -8, 4, 39 }, { 0, 8, 6, 39 },
    {metasprite_end}
};

const metasprite_t spritesheet_27_metasprite_4[]  = {
    { 0, 0, 8, 32 }, { 0, 8, 10, 32 }, { 0, -8, 12, 39 }, { 0, 8, 14, 39 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_27_metasprites[] = {
    spritesheet_27_metasprite_0,
    spritesheet_27_metasprite_1,
    spritesheet_27_metasprite_2,
    spritesheet_27_metasprite_3,
    spritesheet_27_metasprite_4
};

const struct animation_t spritesheet_27_animations[] = {
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

const UWORD spritesheet_27_animations_lookup[] = {
    SPRITE_27_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_27 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_27_metasprites,
    .animations = spritesheet_27_animations,
    .animations_lookup = spritesheet_27_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_42),
    .cgb_tileset = { NULL, NULL }
};
