#pragma bank 255

// Background: Logotipo

#include "gbs_types.h"
#include "data/tileset_11.h"
#include "data/tilemap_34.h"
#include "data/tilemap_attr_1.h"

BANKREF(background_34)

const struct background_t background_34 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_11),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_34),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_1)
};
