#pragma bank 255

// Scene: Level 01
// Actors

#include "gbs_types.h"
#include "data/spritesheet_12.h"
#include "data/script_s8a0_update.h"
#include "data/spritesheet_13.h"
#include "data/script_s8a1_update.h"
#include "data/spritesheet_14.h"
#include "data/script_s8a2_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a3_update.h"
#include "data/script_s8a3_interact.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a5_update.h"
#include "data/script_s8a5_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a6_update.h"
#include "data/script_s8a6_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s8a7_update.h"
#include "data/script_s8a7_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a8_update.h"
#include "data/script_s8a8_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a9_update.h"
#include "data/script_s8a9_interact.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a11_update.h"
#include "data/script_s8a11_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s8a12_update.h"
#include "data/script_s8a12_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s8a13_update.h"
#include "data/script_s8a13_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s8a14_update.h"
#include "data/script_s8a14_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s8a15_update.h"
#include "data/script_s8a15_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s8a16_update.h"
#include "data/script_s8a16_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s8a17_update.h"
#include "data/script_s8a17_interact.h"

BANKREF(scene_8_actors)

const struct actor_t scene_8_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_12),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s8a0_update),
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
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(spritesheet_13),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s8a1_update),
        .exclusive_sprite = 0
    },
    {
        // Fin Nivel,
        .pos = {
            .x = 1736 * 16,
            .y = 88 * 16
        },
        .bounds = {
            .left = 3,
            .bottom = 4,
            .right = 13,
            .top = -5
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_14),
        .move_speed = 16,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_3,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s8a2_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 232 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s8a3_update),
        .script = TO_FAR_PTR_T(script_s8a3_interact),
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
        // Caracol,
        .pos = {
            .x = 472 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s8a5_update),
        .script = TO_FAR_PTR_T(script_s8a5_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 632 * 16,
            .y = 64 * 16
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
        .script_update = TO_FAR_PTR_T(script_s8a6_update),
        .script = TO_FAR_PTR_T(script_s8a6_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 760 * 16,
            .y = 72 * 16
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
        .script_update = TO_FAR_PTR_T(script_s8a7_update),
        .script = TO_FAR_PTR_T(script_s8a7_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 1424 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s8a8_update),
        .script = TO_FAR_PTR_T(script_s8a8_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 1664 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s8a9_update),
        .script = TO_FAR_PTR_T(script_s8a9_interact),
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
            .x = 1192 * 16,
            .y = 64 * 16
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
        .script_update = TO_FAR_PTR_T(script_s8a11_update),
        .script = TO_FAR_PTR_T(script_s8a11_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 344 * 16,
            .y = 80 * 16
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
        .script_update = TO_FAR_PTR_T(script_s8a12_update),
        .script = TO_FAR_PTR_T(script_s8a12_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 872 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s8a13_update),
        .script = TO_FAR_PTR_T(script_s8a13_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 1040 * 16,
            .y = 72 * 16
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
        .script_update = TO_FAR_PTR_T(script_s8a14_update),
        .script = TO_FAR_PTR_T(script_s8a14_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 1536 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s8a15_update),
        .script = TO_FAR_PTR_T(script_s8a15_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 928 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_18),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s8a16_update),
        .script = TO_FAR_PTR_T(script_s8a16_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 1368 * 16,
            .y = 48 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_18),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s8a17_update),
        .script = TO_FAR_PTR_T(script_s8a17_interact),
        .exclusive_sprite = 0
    }
};
