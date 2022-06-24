#pragma bank 255

// Background: INTRO Level 05

#include "gbs_types.h"
#include "data/tileset_4.h"
#include "data/tilemap_12.h"
#include "data/tilemap_attr_6.h"

BANKREF(background_12)

const struct background_t background_12 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_4),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_12),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_6)
};
