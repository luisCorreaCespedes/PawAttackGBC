#pragma bank 255

// Scene: Level 02
// Projectiles

#include "gbs_types.h"
#include "data/spritesheet_1.h"
#include "data/spritesheet_3.h"
#include "data/spritesheet_3.h"

BANKREF(scene_10_projectiles)

const struct projectile_def_t scene_10_projectiles[] = {
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
        .sprite = TO_FAR_PTR_T(spritesheet_3),
        .move_speed = 22,
        .life_time = 48,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_PLAYER,
        .bounds = {
            .left = 1,
            .bottom = 1,
            .right = 5,
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
        .sprite = TO_FAR_PTR_T(spritesheet_3),
        .move_speed = 22,
        .life_time = 42,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_PLAYER,
        .bounds = {
            .left = 1,
            .bottom = 1,
            .right = 5,
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
    }
};
