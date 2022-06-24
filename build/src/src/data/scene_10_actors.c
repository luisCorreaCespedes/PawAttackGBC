#pragma bank 255

// Scene: Level 02
// Actors

#include "gbs_types.h"
#include "data/spritesheet_19.h"
#include "data/script_s10a0_update.h"
#include "data/spritesheet_13.h"
#include "data/script_s10a1_update.h"
#include "data/spritesheet_14.h"
#include "data/script_s10a2_interact.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_20.h"
#include "data/script_s10a5_update.h"
#include "data/script_s10a5_interact.h"
#include "data/spritesheet_21.h"
#include "data/script_s10a6_update.h"
#include "data/script_s10a6_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s10a7_update.h"
#include "data/script_s10a7_interact.h"
#include "data/spritesheet_20.h"
#include "data/script_s10a8_update.h"
#include "data/script_s10a8_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s10a9_update.h"
#include "data/script_s10a9_interact.h"
#include "data/spritesheet_22.h"
#include "data/script_s10a10_update.h"
#include "data/script_s10a10_interact.h"
#include "data/spritesheet_20.h"
#include "data/script_s10a11_update.h"
#include "data/script_s10a11_interact.h"
#include "data/spritesheet_21.h"
#include "data/script_s10a12_update.h"
#include "data/script_s10a12_interact.h"
#include "data/spritesheet_18.h"
#include "data/script_s10a13_update.h"
#include "data/script_s10a13_interact.h"
#include "data/spritesheet_21.h"
#include "data/script_s10a14_update.h"
#include "data/script_s10a14_interact.h"
#include "data/spritesheet_20.h"
#include "data/script_s10a15_update.h"
#include "data/script_s10a15_interact.h"
#include "data/spritesheet_22.h"
#include "data/script_s10a16_update.h"
#include "data/script_s10a16_interact.h"
#include "data/spritesheet_22.h"
#include "data/script_s10a17_update.h"
#include "data/script_s10a17_interact.h"
#include "data/spritesheet_22.h"
#include "data/script_s10a18_update.h"
#include "data/script_s10a18_interact.h"
#include "data/spritesheet_21.h"
#include "data/script_s10a19_update.h"
#include "data/script_s10a19_interact.h"

BANKREF(scene_10_actors)

const struct actor_t scene_10_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_19),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s10a0_update),
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
        .script_update = TO_FAR_PTR_T(script_s10a1_update),
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
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_3,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s10a2_interact),
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
        // Serpiente,
        .pos = {
            .x = 184 * 16,
            .y = 88 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = -7
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_20),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a5_update),
        .script = TO_FAR_PTR_T(script_s10a5_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 560 * 16,
            .y = 72 * 16
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
        .script_update = TO_FAR_PTR_T(script_s10a6_update),
        .script = TO_FAR_PTR_T(script_s10a6_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 344 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s10a7_update),
        .script = TO_FAR_PTR_T(script_s10a7_interact),
        .exclusive_sprite = 0
    },
    {
        // Serpiente,
        .pos = {
            .x = 464 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = -7
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_20),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a8_update),
        .script = TO_FAR_PTR_T(script_s10a8_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 832 * 16,
            .y = 64 * 16
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
        .script_update = TO_FAR_PTR_T(script_s10a9_update),
        .script = TO_FAR_PTR_T(script_s10a9_interact),
        .exclusive_sprite = 0
    },
    {
        // Escorpion,
        .pos = {
            .x = 696 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = -6,
            .bottom = 7,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_22),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a10_update),
        .script = TO_FAR_PTR_T(script_s10a10_interact),
        .exclusive_sprite = 0
    },
    {
        // Serpiente,
        .pos = {
            .x = 1024 * 16,
            .y = 48 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = -7
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_20),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a11_update),
        .script = TO_FAR_PTR_T(script_s10a11_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 1080 * 16,
            .y = 72 * 16
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
        .script_update = TO_FAR_PTR_T(script_s10a12_update),
        .script = TO_FAR_PTR_T(script_s10a12_interact),
        .exclusive_sprite = 0
    },
    {
        // Ave,
        .pos = {
            .x = 1280 * 16,
            .y = 64 * 16
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
        .script_update = TO_FAR_PTR_T(script_s10a13_update),
        .script = TO_FAR_PTR_T(script_s10a13_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 1384 * 16,
            .y = 88 * 16
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
        .script_update = TO_FAR_PTR_T(script_s10a14_update),
        .script = TO_FAR_PTR_T(script_s10a14_interact),
        .exclusive_sprite = 0
    },
    {
        // Serpiente,
        .pos = {
            .x = 1480 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 13,
            .top = -7
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_20),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a15_update),
        .script = TO_FAR_PTR_T(script_s10a15_interact),
        .exclusive_sprite = 0
    },
    {
        // Escorpion,
        .pos = {
            .x = 912 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = -6,
            .bottom = 7,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_22),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a16_update),
        .script = TO_FAR_PTR_T(script_s10a16_interact),
        .exclusive_sprite = 0
    },
    {
        // Escorpion,
        .pos = {
            .x = 1208 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = -6,
            .bottom = 7,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_22),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a17_update),
        .script = TO_FAR_PTR_T(script_s10a17_interact),
        .exclusive_sprite = 0
    },
    {
        // Escorpion,
        .pos = {
            .x = 1584 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = -6,
            .bottom = 7,
            .right = 13,
            .top = -5
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_22),
        .move_speed = 8,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s10a18_update),
        .script = TO_FAR_PTR_T(script_s10a18_interact),
        .exclusive_sprite = 0
    },
    {
        // Fuego,
        .pos = {
            .x = 240 * 16,
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
        .script_update = TO_FAR_PTR_T(script_s10a19_update),
        .script = TO_FAR_PTR_T(script_s10a19_interact),
        .exclusive_sprite = 0
    }
};
