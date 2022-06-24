#pragma bank 255

// Palette: 12

#include "gbs_types.h"

BANKREF(palette_12)

const struct palette_t palette_12 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(4, 4, 4), RGB(3, 3, 3), RGB(6, 8, 6), RGB(5, 6, 5)),
        CGB_PALETTE(RGB(7, 7, 7), RGB(9, 9, 9), RGB(2, 8, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(4, 4, 4), RGB(10, 10, 5), RGB(8, 8, 4), RGB(6, 6, 3)),
        CGB_PALETTE(RGB(4, 4, 4), RGB(9, 9, 9), RGB(2, 8, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(7, 7, 7), RGB(9, 9, 9), RGB(4, 4, 4), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(5, 6, 5), RGB(9, 9, 9), RGB(2, 8, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(27, 29, 11), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
