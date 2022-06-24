#pragma bank 255

// Scene: Menu
// Actors

#include "gbs_types.h"
#include "data/spritesheet_11.h"
#include "data/script_s3a0_update.h"

BANKREF(scene_3_actors)

const struct actor_t scene_3_actors[] = {
    {
        // Cursor,
        .pos = {
            .x = 32 * 16,
            .y = 48 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 3,
            .top = 4
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_11),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(script_s3a0_update),
        .exclusive_sprite = 0
    }
};
