#pragma bank 255

// Background: INTRO Level 4-1

#include "gbs_types.h"
#include "data/tileset_4.h"
#include "data/tilemap_17.h"
#include "data/tilemap_attr_7.h"

BANKREF(background_17)

const struct background_t background_17 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_4),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_17),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_7)
};
