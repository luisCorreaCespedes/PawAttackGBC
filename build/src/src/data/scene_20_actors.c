#pragma bank 255

// Scene: Boss Cactubis Arubis
// Actors

#include "gbs_types.h"
#include "data/spritesheet_31.h"
#include "data/script_s20a0_update.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_16.h"
#include "data/spritesheet_32.h"
#include "data/script_s20a3_update.h"
#include "data/script_s20a3_interact.h"
#include "data/spritesheet_33.h"
#include "data/spritesheet_14.h"
#include "data/script_s20a5_interact.h"

BANKREF(scene_20_actors)

const struct actor_t scene_20_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_31),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s20a0_update),
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
        // Cactubis Arubis,
        .pos = {
            .x = 120 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 1,
            .bottom = 7,
            .right = 12,
            .top = -23
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_32),
        .move_speed = 6,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s20a3_update),
        .script = TO_FAR_PTR_T(script_s20a3_interact),
        .exclusive_sprite = 0
    },
    {
        // Obstaculos,
        .pos = {
            .x = 40 * 16,
            .y = 0 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(spritesheet_33),
        .move_speed = 7,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .exclusive_sprite = 0
    },
    {
        // Fin Nivel,
        .pos = {
            .x = 136 * 16,
            .y = 72 * 16
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
        .script = TO_FAR_PTR_T(script_s20a5_interact),
        .exclusive_sprite = 0
    }
};
