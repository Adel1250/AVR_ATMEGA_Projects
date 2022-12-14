#include "dotMatrix_int.h"

int main(void) {
    u8 col[3][8] = {
        {0b00011000, 0b00111100, 0b01100110, 0b11000011, 0b11111111, 0b11111111, 0b11000011, 0b11000011}, // A
        {0xFE, 0xC3, 0xC3, 0xFE, 0xFE, 0xC3, 0xC3, 0xFE}, // B
        {0x3F, 0x7F, 0xC0, 0xC0, 0xC0, 0xC0, 0x7F, 0x3F} // C
    };
    u8 k = 0;
    while (1) {
        if (k > 2) {
            k = 0;
        }
        for (u8 i = 0; i < 50; i++) {
            displaySymbol(2, 3, col[k]);
        }
        k++;
    }
    return 0;
}
