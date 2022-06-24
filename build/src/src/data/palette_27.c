#pragma bank 255

// Palette: 27

#include "gbs_types.h"

BANKREF(palette_27)

const struct palette_t palette_27 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_LITE_GRAY, DMG_BLACK),
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(31, 31, 31), RGB(22, 30, 17), RGB(27, 4, 4)),
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(10, 21, 31), RGB(10, 21, 31), RGB(4, 16, 30), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 14), RGB(29, 31, 14), RGB(29, 21, 3), RGB(0, 0, 1)) 
    }
};
