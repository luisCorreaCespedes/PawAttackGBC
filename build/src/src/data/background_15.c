#pragma bank 255

// Background: INTRO Level 3-2

#include "gbs_types.h"
#include "data/tileset_13.h"
#include "data/tilemap_15.h"
#include "data/tilemap_attr_5.h"

BANKREF(background_15)

const struct background_t background_15 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_13),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_15),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_5)
};
