// Texas flag. Raster Test.

// https://github.com/srl295/txflag.git

// Copyright © 2026 by Steven R. Loomis
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//     http://www.apache.org/licenses/LICENSE-2.0

#include <stdio.h>
#include "../flag.hh"

int main(int argc, const char *argv[]) {
    const int WIDTH = 70;
    const int HEIGHT = 20;
        for(int v=0;v<HEIGHT;v++) {
            putchar('\n');
            for(int h=0;h<WIDTH;h++) {
            switch(TxFlag::getTxFlagPixel(WIDTH,HEIGHT,h,v)) {
                case TxFlag::TxRed:
                    putchar('*');
                    break;
                case TxFlag::TxWhite:
                    putchar('_');
                    break;
                case TxFlag::TxBlue:
                    putchar('@');
                    break;
                default:
                    putchar('?');
                    break;
            }
        }
    }
    putchar('\n');
}
