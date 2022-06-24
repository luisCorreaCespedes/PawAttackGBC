#pragma bank 255
// SpriteSheet: HUD Level 04
  
#include "gbs_types.h"
#include "data/tileset_41.h"

BANKREF(spritesheet_26)

#define SPRITE_26_STATE_DEFAULT 0

const metasprite_t spritesheet_26_metasprite_0[]  = {
    { 0, 24, 0, 1 }, { 0, -8, 2, 1 }, { 0, -8, 4, 1 }, { 0, -8, 6, 1 }, { 0, -8, 8, 1 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_26_metasprites[] = {
    spritesheet_26_metasprite_0
};

const struct animation_t spritesheet_26_animations[] = {
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

const UWORD spritesheet_26_animations_lookup[] = {
    SPRITE_26_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_26 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_26_metasprites,
    .animations = spritesheet_26_animations,
    .animations_lookup = spritesheet_26_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_41),
    .cgb_tileset = { NULL, NULL }
};
