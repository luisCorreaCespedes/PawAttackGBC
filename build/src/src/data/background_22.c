#pragma bank 255

// Background: Level 01

#include "gbs_types.h"
#include "data/tileset_10.h"
#include "data/tilemap_22.h"
#include "data/tilemap_attr_8.h"

BANKREF(background_22)

const struct background_t background_22 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_10),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_22),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_8)
};
