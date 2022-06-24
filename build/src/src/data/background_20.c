#pragma bank 255

// Background: Intro Boss 01

#include "gbs_types.h"
#include "data/tileset_3.h"
#include "data/tilemap_20.h"
#include "data/tilemap_attr_5.h"

BANKREF(background_20)

const struct background_t background_20 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_3),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_20),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_5)
};
