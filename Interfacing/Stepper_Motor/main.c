#define F_CPU 8000000UL

#include "dio_int.h"
#include <util/delay.h>

int main(void) {
    dioSetPortDirection(3, OUTPUT);
    dioSetPortDirection(3, OUTPUT);
    dioSetPortDirection(3, OUTPUT);
    dioSetPortDirection(3, OUTPUT);

    while (1) {
        for (u8 i = 0; i < 128; i++) {
            dioSetPortValue(3, 0x03);
            _delay_ms(50);
            dioSetPortValue(3, 0x06);
            _delay_ms(50);
            dioSetPortValue(3, 0x0C);
            _delay_ms(50);
            dioSetPortValue(3, 0x09);
            _delay_ms(50);
        }
        _delay_ms(1000);
    }
    return 0;
}
