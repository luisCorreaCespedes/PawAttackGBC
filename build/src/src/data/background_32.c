#pragma bank 255

// Background: Level 4-2

#include "gbs_types.h"
#include "data/tileset_9.h"
#include "data/tilemap_32.h"
#include "data/tilemap_attr_17.h"

BANKREF(background_32)

const struct background_t background_32 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_9),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_32),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_17)
};
