#pragma bank 255

// Palette: 8

#include "gbs_types.h"

BANKREF(palette_8)

const struct palette_t palette_8 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(13, 27, 30), RGB(11, 24, 10), RGB(18, 25, 5), RGB(5, 12, 7)),
        CGB_PALETTE(RGB(13, 27, 30), RGB(31, 31, 31), RGB(11, 11, 11), RGB(9, 9, 9)),
        CGB_PALETTE(RGB(18, 16, 4), RGB(15, 13, 3), RGB(5, 18, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(13, 27, 30), RGB(8, 6, 2), RGB(8, 23, 9), RGB(6, 17, 7)),
        CGB_PALETTE(RGB(13, 27, 30), RGB(15, 13, 3), RGB(5, 18, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(18, 16, 4), RGB(15, 13, 3), RGB(13, 27, 30), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(9, 18, 20), RGB(9, 18, 20), RGB(0, 0, 1)) 
    }
};
