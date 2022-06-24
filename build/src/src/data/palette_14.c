#pragma bank 255

// Palette: 14

#include "gbs_types.h"

BANKREF(palette_14)

const struct palette_t palette_14 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(19, 27, 30), RGB(31, 31, 31), RGB(2, 3, 7), RGB(4, 4, 14)),
        CGB_PALETTE(RGB(19, 27, 30), RGB(31, 31, 31), RGB(22, 9, 18), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(19, 27, 30), RGB(31, 31, 31), RGB(21, 5, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(19, 27, 30), RGB(22, 27, 11), RGB(17, 21, 6), RGB(6, 17, 7)),
        CGB_PALETTE(RGB(2, 3, 7), RGB(31, 31, 31), RGB(21, 5, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(4, 4, 14), RGB(31, 31, 31), RGB(21, 5, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(27, 29, 11), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
