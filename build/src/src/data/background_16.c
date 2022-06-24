#pragma bank 255

// Background: INTRO Level 3-3

#include "gbs_types.h"
#include "data/tileset_2.h"
#include "data/tilemap_16.h"
#include "data/tilemap_attr_5.h"

BANKREF(background_16)

const struct background_t background_16 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_2),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_16),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_5)
};
