#pragma bank 255

// Background: Pantalla Inicial - copia

#include "gbs_types.h"
#include "data/tileset_14.h"
#include "data/tilemap_37.h"
#include "data/tilemap_attr_20.h"

BANKREF(background_37)

const struct background_t background_37 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_14),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_37),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_20)
};
