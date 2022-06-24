#pragma bank 255

// Scene: Level 05
// Actors

#include "gbs_types.h"
#include "data/spritesheet_29.h"
#include "data/script_s16a0_update.h"
#include "data/spritesheet_13.h"
#include "data/script_s16a1_update.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_15.h"
#include "data/script_s16a4_update.h"
#include "data/script_s16a4_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s16a5_update.h"
#include "data/script_s16a5_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s16a6_update.h"
#include "data/script_s16a6_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s16a7_update.h"
#include "data/script_s16a7_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s16a8_update.h"
#include "data/script_s16a8_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s16a9_update.h"
#include "data/script_s16a9_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s16a10_update.h"
#include "data/script_s16a10_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s16a11_update.h"
#include "data/script_s16a11_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s16a12_update.h"
#include "data/script_s16a12_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s16a13_update.h"
#include "data/script_s16a13_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s16a14_update.h"
#include "data/script_s16a14_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s16a15_update.h"
#include "data/script_s16a15_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s16a16_update.h"
#include "data/script_s16a16_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s16a17_update.h"
#include "data/script_s16a17_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s16a18_update.h"
#include "data/script_s16a18_interact.h"

BANKREF(scene_16_actors)

const struct actor_t scene_16_actors[] = {
    {
        // HUD Nivel,
        .pos = {
            .x = 24 * 16,
            .y = 136 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_29),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s16a0_update),
        .exclusive_sprite = 0
    },
    {
        // Vida,
        .pos = {
            .x = 120 * 16,
            .y = 136 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_13),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s16a1_update),
        .exclusive_sprite = 0
    },
    {
        // Enemigo Fantasma 1,
        .pos = {
            .x = 8 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(spritesheet_16),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .exclusive_sprite = 0
    },
    {
        // Enemigo Fantasma 2,
        .pos = {
            .x = 8 * 16,
            .y = 24 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(spritesheet_16),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 104 * 16,
            .y = 88 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 14,
            .top = -3
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_15),
        .move_speed = 6,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a4_update),
        .script = TO_FAR_PTR_T(script_s16a4_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 200 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_17),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a5_update),
        .script = TO_FAR_PTR_T(script_s16a5_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 272 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_17),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a6_update),
        .script = TO_FAR_PTR_T(script_s16a6_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 608 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_18),
        .move_speed = 12,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a7_update),
        .script = TO_FAR_PTR_T(script_s16a7_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 808 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_18),
        .move_speed = 12,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a8_update),
        .script = TO_FAR_PTR_T(script_s16a8_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 392 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = 0
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_28),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a9_update),
        .script = TO_FAR_PTR_T(script_s16a9_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 488 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 14,
            .top = -3
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_15),
        .move_speed = 6,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a10_update),
        .script = TO_FAR_PTR_T(script_s16a10_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 704 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = 0
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_28),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a11_update),
        .script = TO_FAR_PTR_T(script_s16a11_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 944 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = 0
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_28),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a12_update),
        .script = TO_FAR_PTR_T(script_s16a12_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 1048 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 14,
            .top = -3
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_15),
        .move_speed = 6,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a13_update),
        .script = TO_FAR_PTR_T(script_s16a13_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 1168 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_18),
        .move_speed = 12,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a14_update),
        .script = TO_FAR_PTR_T(script_s16a14_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 1688 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = 0
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_28),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a15_update),
        .script = TO_FAR_PTR_T(script_s16a15_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 1320 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_17),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a16_update),
        .script = TO_FAR_PTR_T(script_s16a16_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 1528 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_18),
        .move_speed = 12,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a17_update),
        .script = TO_FAR_PTR_T(script_s16a17_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 1632 * 16,
            .y = 48 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_17),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s16a18_update),
        .script = TO_FAR_PTR_T(script_s16a18_interact),
        .exclusive_sprite = 0
    }
};
