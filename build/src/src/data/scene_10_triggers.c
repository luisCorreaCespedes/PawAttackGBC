#pragma bank 255

// Scene: Level 02
// Triggers

#include "gbs_types.h"
#include "data/script_s10t0_interact.h"

BANKREF(scene_10_triggers)

const struct trigger_t scene_10_triggers[] = {
    {
        // Vacio,
        .x = 0,
        .y = 16,
        .width = 220,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s10t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
