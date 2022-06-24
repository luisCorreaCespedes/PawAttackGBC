#pragma bank 255

// Scene: Level 04
// Actors

#include "gbs_types.h"
#include "data/spritesheet_26.h"
#include "data/script_s14a0_update.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_27.h"
#include "data/script_s14a4_update.h"
#include "data/script_s14a4_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s14a5_update.h"
#include "data/script_s14a5_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s14a6_update.h"
#include "data/script_s14a6_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s14a7_update.h"
#include "data/script_s14a7_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s14a8_update.h"
#include "data/script_s14a8_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s14a9_update.h"
#include "data/script_s14a9_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s14a10_update.h"
#include "data/script_s14a10_interact.h"
#include "data/spritesheet_27.h"
#include "data/script_s14a11_update.h"
#include "data/script_s14a11_interact.h"
#include "data/spritesheet_15.h"
#include "data/script_s14a12_update.h"
#include "data/script_s14a12_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s14a13_update.h"
#include "data/script_s14a13_interact.h"
#include "data/spritesheet_27.h"
#include "data/script_s14a14_update.h"
#include "data/script_s14a14_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s14a15_update.h"
#include "data/script_s14a15_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s14a16_update.h"
#include "data/script_s14a16_interact.h"
#include "data/spritesheet_17.h"
#include "data/script_s14a17_update.h"
#include "data/script_s14a17_interact.h"
#include "data/spritesheet_28.h"
#include "data/script_s14a18_update.h"
#include "data/script_s14a18_interact.h"
#include "data/spritesheet_14.h"
#include "data/script_s14a19_interact.h"

BANKREF(scene_14_actors)

const struct actor_t scene_14_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_26),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s14a0_update),
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
        // Pinguino,
        .pos = {
            .x = 560 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_27),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s14a4_update),
        .script = TO_FAR_PTR_T(script_s14a4_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 208 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a5_update),
        .script = TO_FAR_PTR_T(script_s14a5_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 128 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a6_update),
        .script = TO_FAR_PTR_T(script_s14a6_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 336 * 16,
            .y = 72 * 16
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
        .script_update = TO_FAR_PTR_T(script_s14a7_update),
        .script = TO_FAR_PTR_T(script_s14a7_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 664 * 16,
            .y = 96 * 16
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
        .script_update = TO_FAR_PTR_T(script_s14a8_update),
        .script = TO_FAR_PTR_T(script_s14a8_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 424 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a9_update),
        .script = TO_FAR_PTR_T(script_s14a9_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 736 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a10_update),
        .script = TO_FAR_PTR_T(script_s14a10_interact),
        .exclusive_sprite = 0
    },
    {
        // Pinguino,
        .pos = {
            .x = 864 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_27),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s14a11_update),
        .script = TO_FAR_PTR_T(script_s14a11_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol,
        .pos = {
            .x = 1040 * 16,
            .y = 40 * 16
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
        .script_update = TO_FAR_PTR_T(script_s14a12_update),
        .script = TO_FAR_PTR_T(script_s14a12_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 1112 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a13_update),
        .script = TO_FAR_PTR_T(script_s14a13_interact),
        .exclusive_sprite = 0
    },
    {
        // Pinguino,
        .pos = {
            .x = 1272 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_27),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s14a14_update),
        .script = TO_FAR_PTR_T(script_s14a14_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 1472 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a15_update),
        .script = TO_FAR_PTR_T(script_s14a15_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 1392 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a16_update),
        .script = TO_FAR_PTR_T(script_s14a16_interact),
        .exclusive_sprite = 0
    },
    {
        // Abeja,
        .pos = {
            .x = 1568 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s14a17_update),
        .script = TO_FAR_PTR_T(script_s14a17_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 992 * 16,
            .y = 88 * 16
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
        .script_update = TO_FAR_PTR_T(script_s14a18_update),
        .script = TO_FAR_PTR_T(script_s14a18_interact),
        .exclusive_sprite = 0
    },
    {
        // Fin Nivel,
        .pos = {
            .x = 1736 * 16,
            .y = 96 * 16
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
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_3,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s14a19_interact),
        .exclusive_sprite = 0
    }
};
