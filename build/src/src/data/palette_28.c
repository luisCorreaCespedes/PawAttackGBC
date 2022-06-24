#pragma bank 255

// Palette: 28

#include "gbs_types.h"

BANKREF(palette_28)

const struct palette_t palette_28 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_LITE_GRAY, DMG_BLACK),
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(31, 31, 31), RGB(30, 5, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(13, 23, 13), RGB(13, 23, 13), RGB(9, 15, 9), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 10, 28), RGB(29, 10, 28), RGB(22, 2, 17), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 15), RGB(29, 31, 15), RGB(17, 30, 28), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 1), RGB(31, 31, 1), RGB(26, 29, 1), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(9, 3, 31), RGB(9, 3, 31), RGB(5, 1, 23), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 29), RGB(29, 31, 29), RGB(19, 20, 19), RGB(0, 0, 1)) 
    }
};
