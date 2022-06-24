#pragma bank 255
// SpriteSheet: Fin Nivel
  
#include "gbs_types.h"
#include "data/tileset_29.h"

BANKREF(spritesheet_14)

#define SPRITE_14_STATE_DEFAULT 0

const metasprite_t spritesheet_14_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_14_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_14_metasprites[] = {
    spritesheet_14_metasprite_0,
    spritesheet_14_metasprite_1
};

const struct animation_t spritesheet_14_animations[] = {
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

const UWORD spritesheet_14_animations_lookup[] = {
    SPRITE_14_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_14 = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_14_metasprites,
    .animations = spritesheet_14_animations,
    .animations_lookup = spritesheet_14_animations_lookup,
    .bounds = {
        .left = 3,
        .bottom = 4,
        .right = 13,
        .top = -5
    },
    .tileset = TO_FAR_PTR_T(tileset_29),
    .cgb_tileset = { NULL, NULL }
};
