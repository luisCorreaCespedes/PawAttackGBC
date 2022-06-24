#pragma bank 255
// SpriteSheet: HUD Vida
  
#include "gbs_types.h"
#include "data/tileset_28.h"

BANKREF(spritesheet_13)

#define SPRITE_13_STATE_DEFAULT 0

const metasprite_t spritesheet_13_metasprite_0[]  = {
    { 0, 16, 0, 1 }, { 0, -8, 2, 1 }, { 0, -8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_13_metasprite_1[]  = {
    { 0, 16, 8, 1 }, { 0, -8, 2, 1 }, { 0, -8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_13_metasprite_2[]  = {
    { 0, 16, 8, 1 }, { 0, -8, 10, 1 }, { 0, -8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_13_metasprite_3[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t spritesheet_13_metasprite_4[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_13_metasprites[] = {
    spritesheet_13_metasprite_0,
    spritesheet_13_metasprite_1,
    spritesheet_13_metasprite_2,
    spritesheet_13_metasprite_3,
    spritesheet_13_metasprite_4
};

const struct animation_t spritesheet_13_animations[] = {
    {
        .start = 0,
        .end = 2
    },
    {
        .start = 0,
        .end = 2
    },
    {
        .start = 0,
        .end = 2
    },
    {
        .start = 0,
        .end = 2
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 3,
        .end = 4
    }
};

const UWORD spritesheet_13_animations_lookup[] = {
    SPRITE_13_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_13 = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = spritesheet_13_metasprites,
    .animations = spritesheet_13_animations,
    .animations_lookup = spritesheet_13_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_28),
    .cgb_tileset = { NULL, NULL }
};
