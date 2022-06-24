#pragma bank 255

// Background: Level 04

#include "gbs_types.h"
#include "data/tileset_9.h"
#include "data/tilemap_25.h"
#include "data/tilemap_attr_11.h"

BANKREF(background_25)

const struct background_t background_25 = {
    .width = 220,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_9),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_25),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_11)
};
