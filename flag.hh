// Texas flag.
// https://github.com/srl295/txflag.git

// Copyright © 2026 by Steven R. Loomis
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//     http://www.apache.org/licenses/LICENSE-2.0

// This header file is for the raster version.
// To use:
// - choose a width and height for the flag
// - call getTxFlagPixel() in a loop across h and v to get the pixels

#ifndef TXFLAG_HH
#define TXFLAG_HH

namespace TxFlag {
// enumeration for the color
enum TxColor { TxRed, TxWhite, TxBlue };

/**
 * @param width width of the flag
 * @param height height of the flag
 * @param h h-indicator for the current scan column
 * @param v v-indicator for the current scan row
 * @returns a TxColor indicating Red, White, Blue
 */
TxColor getTxFlagPixel(
    const int width,
    const int height,
    const int h,
    const int v);

inline TxColor getTxFlagPixel(
    const int width,
    const int height,
    const int h,
    const int v) {
        const auto bwid = width/3;
        const auto hbwid = bwid / 2;
        const auto hheight = height / 2;
        const auto wwid = bwid * 2;
        const auto starwidth = width * ((1.0 / 3.0) * .75);
        const auto hstarwidth = starwidth / 2;
        if (h > bwid) {
            if (v < hheight) {
                return TxWhite; // cream on top
            } else {
                return TxRed; // strawberry below
            }
        } else {
            if (h > (hbwid - hstarwidth/2) && h < (hbwid + hstarwidth/2) &&
                v > (hheight - hstarwidth/2) && v < (hheight + hstarwidth/2)) {
                return TxWhite;
            } else {
                return TxBlue;
            }
        }
}

} // end namespace TxFlag
#endif /* TXFLAG_H */
