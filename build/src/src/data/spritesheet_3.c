#pragma bank 255
// SpriteSheet: Balas Escorpion
  
#include "gbs_types.h"
#include "data/tileset_18.h"

BANKREF(spritesheet_3)

#define SPRITE_3_STATE_DEFAULT 0

const metasprite_t spritesheet_3_metasprite_0[]  = {
    { 0, 0, 0, 2 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_3_metasprites[] = {
    spritesheet_3_metasprite_0
};

const struct animation_t spritesheet_3_animations[] = {
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

const UWORD spritesheet_3_animations_lookup[] = {
    SPRITE_3_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_3 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_3_metasprites,
    .animations = spritesheet_3_animations,
    .animations_lookup = spritesheet_3_animations_lookup,
    .bounds = {
        .left = 1,
        .bottom = 1,
        .right = 5,
        .top = -3
    },
    .tileset = TO_FAR_PTR_T(tileset_18),
    .cgb_tileset = { NULL, NULL }
};
