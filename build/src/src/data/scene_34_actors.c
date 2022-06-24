#pragma bank 255

// Scene: Level 4-3
// Actors

#include "gbs_types.h"
#include "data/spritesheet_39.h"
#include "data/script_s34a0_update.h"
#include "data/spritesheet_13.h"

BANKREF(scene_34_actors)

const struct actor_t scene_34_actors[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_39),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(script_s34a0_update),
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
    }
};
