#pragma bank 255

// Scene: Level 3-3
// Projectiles

#include "gbs_types.h"
#include "data/spritesheet_1.h"

BANKREF(scene_26_projectiles)

const struct projectile_def_t scene_26_projectiles[] = {
    {
        // Projectile 0,
        .sprite = TO_FAR_PTR_T(spritesheet_1),
        .move_speed = 40,
        .life_time = 30,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_1,
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
        .initial_offset = 160
    }
};
