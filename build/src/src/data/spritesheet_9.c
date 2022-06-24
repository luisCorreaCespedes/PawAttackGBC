#pragma bank 255
// SpriteSheet: Roca
  
#include "gbs_types.h"
#include "data/tileset_24.h"

BANKREF(spritesheet_9)

#define SPRITE_9_STATE_DEFAULT 0

const metasprite_t spritesheet_9_metasprite_0[]  = {
    { 0, 8, 0, 3 }, { 0, -8, 2, 3 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_9_metasprites[] = {
    spritesheet_9_metasprite_0
};

const struct animation_t spritesheet_9_animations[] = {
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

const UWORD spritesheet_9_animations_lookup[] = {
    SPRITE_9_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_9 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_9_metasprites,
    .animations = spritesheet_9_animations,
    .animations_lookup = spritesheet_9_animations_lookup,
    .bounds = {
        .left = 3,
        .bottom = 3,
        .right = 12,
        .top = -5
    },
    .tileset = TO_FAR_PTR_T(tileset_24),
    .cgb_tileset = { NULL, NULL }
};
