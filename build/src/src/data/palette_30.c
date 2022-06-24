#pragma bank 255

// Palette: 30

#include "gbs_types.h"

BANKREF(palette_30)

const struct palette_t palette_30 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_LITE_GRAY, DMG_BLACK),
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(31, 31, 31), RGB(30, 5, 5), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(16, 15, 18), RGB(16, 15, 18), RGB(12, 9, 18), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(9, 9, 9), RGB(9, 9, 9), RGB(6, 6, 6), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 30, 2), RGB(31, 30, 2), RGB(31, 11, 1), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(26, 29, 10), RGB(26, 29, 10), RGB(22, 25, 4), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(18, 20, 18), RGB(18, 20, 18), RGB(12, 12, 12), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(10, 21, 31), RGB(10, 21, 31), RGB(4, 16, 30), RGB(0, 0, 1)) 
    }
};
