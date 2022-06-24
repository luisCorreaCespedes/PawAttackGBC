#pragma bank 255
// SpriteSheet: HUD Boss
  
#include "gbs_types.h"
#include "data/tileset_46.h"

BANKREF(spritesheet_31)

#define SPRITE_31_STATE_DEFAULT 0

const metasprite_t spritesheet_31_metasprite_0[]  = {
    { 0, 16, 0, 1 }, { 0, -8, 2, 1 }, { 0, -8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_31_metasprites[] = {
    spritesheet_31_metasprite_0
};

const struct animation_t spritesheet_31_animations[] = {
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

const UWORD spritesheet_31_animations_lookup[] = {
    SPRITE_31_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_31 = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_31_metasprites,
    .animations = spritesheet_31_animations,
    .animations_lookup = spritesheet_31_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_46),
    .cgb_tileset = { NULL, NULL }
};
