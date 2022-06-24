#pragma bank 255

// Scene: Level 2-3
// Actors

#include "gbs_types.h"
#include "data/spritesheet_30.h"
#include "data/script_s18a0_update.h"
#include "data/spritesheet_13.h"
#include "data/spritesheet_15.h"
#include "data/script_s18a2_update.h"
#include "data/spritesheet_2.h"

BANKREF(scene_18_actors)

const struct actor_t scene_18_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_30),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s18a0_update),
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
        // Caracol,
        .pos = {
            .x = 560 * 16,
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
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s18a2_update),
        .exclusive_sprite = 0
    },
    {
        // Fantasma,
        .pos = {
            .x = 0 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(spritesheet_2),
        .move_speed = 8,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .exclusive_sprite = 0
    }
};
