#pragma bank 255

// Background: Level 02

#include "gbs_types.h"
#include "data/tileset_6.h"
#include "data/tilemap_23.h"
#include "data/tilemap_attr_9.h"

BANKREF(background_23)

const struct background_t background_23 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_6),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_23),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_9)
};
