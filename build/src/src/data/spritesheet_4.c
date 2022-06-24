#pragma bank 255
// SpriteSheet: Balas Araña
  
#include "gbs_types.h"
#include "data/tileset_19.h"

BANKREF(spritesheet_4)

#define SPRITE_4_STATE_DEFAULT 0

const metasprite_t spritesheet_4_metasprite_0[]  = {
    { 0, 0, 0, 3 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_4_metasprites[] = {
    spritesheet_4_metasprite_0
};

const struct animation_t spritesheet_4_animations[] = {
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

const UWORD spritesheet_4_animations_lookup[] = {
    SPRITE_4_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_4 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_4_metasprites,
    .animations = spritesheet_4_animations,
    .animations_lookup = spritesheet_4_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 0,
        .right = 4,
        .top = -2
    },
    .tileset = TO_FAR_PTR_T(tileset_19),
    .cgb_tileset = { NULL, NULL }
};
