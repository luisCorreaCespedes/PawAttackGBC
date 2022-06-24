#pragma bank 255
// SpriteSheet: Fuego
  
#include "gbs_types.h"
#include "data/tileset_36.h"

BANKREF(spritesheet_21)

#define SPRITE_21_STATE_DEFAULT 0

const metasprite_t spritesheet_21_metasprite_0[]  = {
    { 0, 8, 0, 4 }, { 0, -8, 2, 4 },
    {metasprite_end}
};

const metasprite_t spritesheet_21_metasprite_1[]  = {
    { 0, 8, 4, 4 }, { 0, -8, 6, 4 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_21_metasprites[] = {
    spritesheet_21_metasprite_0,
    spritesheet_21_metasprite_1
};

const struct animation_t spritesheet_21_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    }
};

const UWORD spritesheet_21_animations_lookup[] = {
    SPRITE_21_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_21 = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_21_metasprites,
    .animations = spritesheet_21_animations,
    .animations_lookup = spritesheet_21_animations_lookup,
    .bounds = {
        .left = 2,
        .bottom = 7,
        .right = 12,
        .top = 0
    },
    .tileset = TO_FAR_PTR_T(tileset_36),
    .cgb_tileset = { NULL, NULL }
};
