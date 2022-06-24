#pragma bank 255

// Background: No Support(2)

#include "gbs_types.h"
#include "data/tileset_13.h"
#include "data/tilemap_36.h"
#include "data/tilemap_attr_1.h"

BANKREF(background_36)

const struct background_t background_36 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_13),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_36),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_1)
};
