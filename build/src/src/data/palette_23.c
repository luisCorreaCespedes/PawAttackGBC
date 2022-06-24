#pragma bank 255

// Palette: 23

#include "gbs_types.h"

BANKREF(palette_23)

const struct palette_t palette_23 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(1, 1, 1), RGB(4, 4, 4), RGB(7, 7, 7), RGB(3, 3, 6)),
        CGB_PALETTE(RGB(1, 1, 1), RGB(3, 3, 3), RGB(8, 8, 8), RGB(7, 7, 7)),
        CGB_PALETTE(RGB(10, 9, 2), RGB(8, 7, 2), RGB(3, 8, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(1, 1, 1), RGB(6, 5, 2), RGB(3, 7, 3), RGB(2, 5, 2)),
        CGB_PALETTE(RGB(1, 1, 1), RGB(8, 7, 2), RGB(3, 8, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(10, 9, 2), RGB(8, 7, 2), RGB(1, 1, 1), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(27, 29, 11), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
