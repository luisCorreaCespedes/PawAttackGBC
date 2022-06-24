#pragma bank 255

// Background: INTRO Level 4-2

#include "gbs_types.h"
#include "data/tileset_4.h"
#include "data/tilemap_18.h"
#include "data/tilemap_attr_5.h"

BANKREF(background_18)

const struct background_t background_18 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_4),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_18),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_5)
};
