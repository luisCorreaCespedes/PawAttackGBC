#pragma bank 255

// Scene: Boss Cactubis Arubis
// Triggers

#include "gbs_types.h"
#include "data/script_s20t0_interact.h"

BANKREF(scene_20_triggers)

const struct trigger_t scene_20_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 16,
        .width = 20,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s20t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
