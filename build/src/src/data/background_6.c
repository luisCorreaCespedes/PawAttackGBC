#pragma bank 255

// Background: Game Over (Sin créditos)

#include "gbs_types.h"
#include "data/tileset_4.h"
#include "data/tilemap_6.h"
#include "data/tilemap_attr_1.h"

BANKREF(background_6)

const struct background_t background_6 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_4),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_6),
    .cgb_tilemap_attr = TO_FAR_PTR_T(tilemap_attr_1)
};
