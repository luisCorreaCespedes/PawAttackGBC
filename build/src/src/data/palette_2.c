#pragma bank 255

// Palette: 2

#include "gbs_types.h"

BANKREF(palette_2)

const struct palette_t palette_2 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(31, 31, 31), RGB(31, 25, 1), RGB(13, 10, 1), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(5, 11, 2), RGB(3, 5, 1), RGB(31, 31, 31)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(13, 14, 13), RGB(13, 14, 13), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(31, 17, 24), RGB(31, 17, 24), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(5, 11, 2), RGB(3, 5, 1), RGB(31, 31, 31)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(9, 18, 20), RGB(9, 18, 20), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(27, 29, 11), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
