#pragma bank 255

// Background: Menu

#include "gbs_types.h"
#include "data/tileset_12.h"
#include "data/tilemap_35.h"
#include "data/tilemap_attr_19.h"

BANKREF(background_35)

const struct background_t background_35 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_12),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_35),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_19)
};
