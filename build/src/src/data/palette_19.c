#pragma bank 255

// Palette: 19

#include "gbs_types.h"

BANKREF(palette_19)

const struct palette_t palette_19 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(31, 31, 11), RGB(30, 31, 1), RGB(21, 21, 1), RGB(26, 19, 7)),
        CGB_PALETTE(RGB(31, 31, 11), RGB(31, 31, 18), RGB(13, 12, 5), RGB(11, 10, 4)),
        CGB_PALETTE(RGB(30, 30, 14), RGB(30, 26, 6), RGB(19, 14, 2), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 11), RGB(9, 17, 4), RGB(9, 13, 6), RGB(8, 12, 3)),
        CGB_PALETTE(RGB(30, 31, 1), RGB(30, 26, 6), RGB(19, 14, 2), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 11), RGB(30, 26, 6), RGB(30, 31, 1), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 11), RGB(30, 26, 6), RGB(19, 14, 2), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(27, 29, 11), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
