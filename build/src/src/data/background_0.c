#pragma bank 255

// Background: Boss 01

#include "gbs_types.h"
#include "data/tileset_6.h"
#include "data/tilemap_0.h"
#include "data/tilemap_attr_0.h"

BANKREF(background_0)

const struct background_t background_0 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_6),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_0),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_0)
};
