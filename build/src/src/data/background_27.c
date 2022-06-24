#pragma bank 255

// Background: Level 2-3

#include "gbs_types.h"
#include "data/tileset_5.h"
#include "data/tilemap_27.h"
#include "data/tilemap_attr_13.h"

BANKREF(background_27)

const struct background_t background_27 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_5),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_27),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_13)
};
