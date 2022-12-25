#define F_CPU 8000000UL
#include "dio_int.h"
#include <util/delay.h>

int main(void) {
    u8 numbers[10] = {0b11000000, 0b11111001, 0b10100100, 0b10110000, 0b10011001, 0b10010010, 0b10000010, 0b11111000, 0b00000000, 0b10010000};
    dioSetPortDirection(2, OUTPUT);
    while (1) {
        for (u8 i = 0; i < 10; i++) {
            dioSetPortValue(2, numbers[i]);
            _delay_ms(1000);
        }
    }
    return 0;
}
