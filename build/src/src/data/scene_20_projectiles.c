#pragma bank 255

// Scene: Boss Cactubis Arubis
// Projectiles

#include "gbs_types.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_8.h"
#include "data/spritesheet_9.h"

BANKREF(scene_20_projectiles)

const struct projectile_def_t scene_20_projectiles[] = {
    {
        // Projectile 0,
        .sprite = TO_FAR_PTR_T(spritesheet_1),
        .move_speed = 40,
        .life_time = 24,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_1 | COLLISION_GROUP_2,
        .bounds = {
            .left = 6,
            .bottom = 1,
            .right = 9,
            .top = -2
        },
        .anim_tick = 255,
        .animations = {
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            }
        },
        .initial_offset = 128
    },
    {
        // Projectile 1,
        .sprite = TO_FAR_PTR_T(spritesheet_8),
        .move_speed = 23,
        .life_time = 90,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_PLAYER,
        .bounds = {
            .left = 0,
            .bottom = 1,
            .right = 9,
            .top = -3
        },
        .anim_tick = 15,
        .animations = {
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            }
        },
        .initial_offset = 0
    },
    {
        // Projectile 2,
        .sprite = TO_FAR_PTR_T(spritesheet_9),
        .move_speed = 23,
        .life_time = 54,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_PLAYER,
        .bounds = {
            .left = 3,
            .bottom = 3,
            .right = 12,
            .top = -5
        },
        .anim_tick = 15,
        .animations = {
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 0,
                .end = 0
            }
        },
        .initial_offset = 0
    }
};
