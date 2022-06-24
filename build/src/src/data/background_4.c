#pragma bank 255

// Background: Creditos

#include "gbs_types.h"
#include "data/tileset_1.h"
#include "data/tilemap_4.h"
#include "data/tilemap_attr_1.h"

BANKREF(background_4)

const struct background_t background_4 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_1),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_4),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_1)
};
