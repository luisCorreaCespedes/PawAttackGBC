#pragma bank 255

// Background: Level 3-2

#include "gbs_types.h"
#include "data/tileset_7.h"
#include "data/tilemap_29.h"
#include "data/tilemap_attr_13.h"

BANKREF(background_29)

const struct background_t background_29 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_7),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_29),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_13)
};
