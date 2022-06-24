#pragma bank 255

// Palette: 9

#include "gbs_types.h"

BANKREF(palette_9)

const struct palette_t palette_9 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(31, 31, 11), RGB(31, 31, 18), RGB(21, 21, 1), RGB(26, 19, 7)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(26, 26, 1), RGB(26, 26, 1), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 27, 21), RGB(28, 21, 15), RGB(15, 11, 17), RGB(0, 4, 6)),
        CGB_PALETTE(RGB(23, 26, 26), RGB(27, 16, 27), RGB(16, 0, 20), RGB(7, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 23), RGB(18, 25, 25), RGB(9, 13, 15), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 27, 22), RGB(15, 24, 15), RGB(13, 17, 8), RGB(11, 7, 4)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(27, 29, 11), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
