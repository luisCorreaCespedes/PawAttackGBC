#pragma bank 255

// Background: Level 05

#include "gbs_types.h"
#include "data/tileset_10.h"
#include "data/tilemap_26.h"
#include "data/tilemap_attr_12.h"

BANKREF(background_26)

const struct background_t background_26 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_10),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_26),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_12)
};
