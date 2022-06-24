#pragma bank 255

// Scene: Level 03
// Actors

#include "gbs_types.h"
#include "data/spritesheet_23.h"
#include "data/script_s12a0_update.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_24.h"
#include "data/script_s12a4_update.h"
#include "data/script_s12a4_interact.h"
#include "data/spritesheet_5.h"
#include "data/script_s12a5_update.h"
#include "data/script_s12a5_interact.h"
#include "data/spritesheet_21.h"
#include "data/script_s12a6_update.h"
#include "data/script_s12a6_interact.h"
#include "data/spritesheet_25.h"
#include "data/script_s12a7_update.h"
#include "data/script_s12a7_interact.h"
#include "data/spritesheet_24.h"
#include "data/script_s12a8_update.h"
#include "data/script_s12a8_interact.h"
#include "data/spritesheet_25.h"
#include "data/script_s12a9_update.h"
#include "data/script_s12a9_interact.h"
#include "data/spritesheet_5.h"
#include "data/script_s12a10_update.h"
#include "data/script_s12a10_interact.h"
#include "data/spritesheet_24.h"
#include "data/script_s12a11_update.h"
#include "data/script_s12a11_interact.h"
#include "data/spritesheet_21.h"
#include "data/script_s12a12_update.h"
#include "data/script_s12a12_interact.h"
#include "data/spritesheet_5.h"
#include "data/script_s12a13_update.h"
#include "data/script_s12a13_interact.h"
#include "data/spritesheet_25.h"
#include "data/script_s12a14_update.h"
#include "data/script_s12a14_interact.h"
#include "data/spritesheet_24.h"
#include "data/script_s12a15_update.h"
#include "data/script_s12a15_interact.h"
#include "data/spritesheet_5.h"
#include "data/script_s12a16_update.h"
#include "data/script_s12a16_interact.h"
#include "data/spritesheet_24.h"
#include "data/script_s12a17_update.h"
#include "data/script_s12a17_interact.h"
#include "data/spritesheet_14.h"
#include "data/script_s12a18_interact.h"
#include "data/spritesheet_24.h"
#include "data/script_s12a19_update.h"
#include "data/script_s12a19_interact.h"

BANKREF(scene_12_actors)

const struct actor_t scene_12_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_23),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s12a0_update),
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
        // Murciélago,
        .pos = {
            .x = 344 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_24),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a4_update),
        .script = TO_FAR_PTR_T(script_s12a4_interact),
        .exclusive_sprite = 0
    },
    {
        // Araña,
        .pos = {
            .x = 144 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 17,
            .top = -1
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_5),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a5_update),
        .script = TO_FAR_PTR_T(script_s12a5_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 240 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 7,
            .right = 12,
            .top = 0
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_21),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a6_update),
        .script = TO_FAR_PTR_T(script_s12a6_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol Cueva,
        .pos = {
            .x = 472 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 14,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_25),
        .move_speed = 6,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a7_update),
        .script = TO_FAR_PTR_T(script_s12a7_interact),
        .exclusive_sprite = 0
    },
    {
        // Murciélago,
        .pos = {
            .x = 600 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_24),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a8_update),
        .script = TO_FAR_PTR_T(script_s12a8_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol Cueva,
        .pos = {
            .x = 704 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 14,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_25),
        .move_speed = 6,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a9_update),
        .script = TO_FAR_PTR_T(script_s12a9_interact),
        .exclusive_sprite = 0
    },
    {
        // Araña,
        .pos = {
            .x = 816 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 17,
            .top = -1
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_5),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a10_update),
        .script = TO_FAR_PTR_T(script_s12a10_interact),
        .exclusive_sprite = 0
    },
    {
        // Murciélago,
        .pos = {
            .x = 928 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_24),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a11_update),
        .script = TO_FAR_PTR_T(script_s12a11_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 1040 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 2,
            .bottom = 7,
            .right = 12,
            .top = 0
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_21),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a12_update),
        .script = TO_FAR_PTR_T(script_s12a12_interact),
        .exclusive_sprite = 0
    },
    {
        // Araña,
        .pos = {
            .x = 1104 * 16,
            .y = 40 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 17,
            .top = -1
        },
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(spritesheet_5),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a13_update),
        .script = TO_FAR_PTR_T(script_s12a13_interact),
        .exclusive_sprite = 0
    },
    {
        // Caracol Cueva,
        .pos = {
            .x = 1272 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 14,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_25),
        .move_speed = 6,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a14_update),
        .script = TO_FAR_PTR_T(script_s12a14_interact),
        .exclusive_sprite = 0
    },
    {
        // Murciélago,
        .pos = {
            .x = 1360 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_24),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a15_update),
        .script = TO_FAR_PTR_T(script_s12a15_interact),
        .exclusive_sprite = 0
    },
    {
        // Araña,
        .pos = {
            .x = 1552 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 17,
            .top = -1
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_5),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a16_update),
        .script = TO_FAR_PTR_T(script_s12a16_interact),
        .exclusive_sprite = 0
    },
    {
        // Murciélago,
        .pos = {
            .x = 1640 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_24),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a17_update),
        .script = TO_FAR_PTR_T(script_s12a17_interact),
        .exclusive_sprite = 0
    },
    {
        // Fin Nivel,
        .pos = {
            .x = 1736 * 16,
            .y = 64 * 16
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
        .script = TO_FAR_PTR_T(script_s12a18_interact),
        .exclusive_sprite = 0
    },
    {
        // Murciélago,
        .pos = {
            .x = 1464 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 5,
            .right = 14,
            .top = -6
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_24),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s12a19_update),
        .script = TO_FAR_PTR_T(script_s12a19_interact),
        .exclusive_sprite = 0
    }
};
