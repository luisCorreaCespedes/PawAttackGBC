#pragma bank 255
// SpriteSheet: HUD Level 05
  
#include "gbs_types.h"
#include "data/tileset_44.h"

BANKREF(spritesheet_29)

#define SPRITE_29_STATE_DEFAULT 0

const metasprite_t spritesheet_29_metasprite_0[]  = {
    { 0, 24, 0, 1 }, { 0, -8, 2, 1 }, { 0, -8, 4, 1 }, { 0, -8, 6, 1 }, { 0, -8, 8, 1 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_29_metasprites[] = {
    spritesheet_29_metasprite_0
};

const struct animation_t spritesheet_29_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD spritesheet_29_animations_lookup[] = {
    SPRITE_29_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_29 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_29_metasprites,
    .animations = spritesheet_29_animations,
    .animations_lookup = spritesheet_29_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_44),
    .cgb_tileset = { NULL, NULL }
};
