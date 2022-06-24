#pragma bank 255

// Scene: Level 4-3
// Triggers

#include "gbs_types.h"
#include "data/script_s34t0_interact.h"

BANKREF(scene_34_triggers)

const struct trigger_t scene_34_triggers[] = {
    {
        // Vacio,
        .x = 0,
        .y = 16,
        .width = 220,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s34t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
