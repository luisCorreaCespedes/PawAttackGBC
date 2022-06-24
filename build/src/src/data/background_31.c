#pragma bank 255

// Background: Level 4-1

#include "gbs_types.h"
#include "data/tileset_10.h"
#include "data/tilemap_31.h"
#include "data/tilemap_attr_16.h"

BANKREF(background_31)

const struct background_t background_31 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_10),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_31),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_16)
};
