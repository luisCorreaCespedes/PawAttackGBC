#pragma bank 255

// Background: INTRO Level 01

#include "gbs_types.h"
#include "data/tileset_4.h"
#include "data/tilemap_8.h"
#include "data/tilemap_attr_4.h"

BANKREF(background_8)

const struct background_t background_8 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_4),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_8),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_4)
};
