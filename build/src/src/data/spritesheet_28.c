#pragma bank 255
// SpriteSheet: Pinchos
  
#include "gbs_types.h"
#include "data/tileset_43.h"

BANKREF(spritesheet_28)

#define SPRITE_28_STATE_DEFAULT 0

const metasprite_t spritesheet_28_metasprite_0[]  = {
    { 0, 8, 0, 7 }, { 0, -8, 2, 7 },
    {metasprite_end}
};

const metasprite_t spritesheet_28_metasprite_1[]  = {
    { 0, 8, 2, 7 }, { 0, -8, 0, 7 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_28_metasprites[] = {
    spritesheet_28_metasprite_0,
    spritesheet_28_metasprite_1
};

const struct animation_t spritesheet_28_animations[] = {
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

const UWORD spritesheet_28_animations_lookup[] = {
    SPRITE_28_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_28 = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_28_metasprites,
    .animations = spritesheet_28_animations,
    .animations_lookup = spritesheet_28_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 7,
        .right = 13,
        .top = 0
    },
    .tileset = TO_FAR_PTR_T(tileset_43),
    .cgb_tileset = { NULL, NULL }
};
