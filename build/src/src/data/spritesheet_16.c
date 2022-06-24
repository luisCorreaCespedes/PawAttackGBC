#pragma bank 255
// SpriteSheet: Enemigos Fantasma
  
#include "gbs_types.h"
#include "data/tileset_31.h"

BANKREF(spritesheet_16)

#define SPRITE_16_STATE_DEFAULT 0

const metasprite_t spritesheet_16_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_16_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_16_metasprites[] = {
    spritesheet_16_metasprite_0,
    spritesheet_16_metasprite_1
};

const struct animation_t spritesheet_16_animations[] = {
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

const UWORD spritesheet_16_animations_lookup[] = {
    SPRITE_16_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_16 = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_16_metasprites,
    .animations = spritesheet_16_animations,
    .animations_lookup = spritesheet_16_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_31),
    .cgb_tileset = { NULL, NULL }
};
