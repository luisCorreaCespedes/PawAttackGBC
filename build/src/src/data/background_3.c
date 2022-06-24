#pragma bank 255

// Background: Controles

#include "gbs_types.h"
#include "data/tileset_0.h"
#include "data/tilemap_3.h"
#include "data/tilemap_attr_2.h"

BANKREF(background_3)

const struct background_t background_3 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_0),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_3),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_2)
};
