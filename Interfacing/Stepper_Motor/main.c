#define F_CPU 8000000UL

#include "dio_int.h"
#include <util/delay.h>

int main(void) {
    dioSetPortDirection(3, OUTPUT);

    dioSetPinDirection(0, 0, INPUT);
    dioSetPinDirection(1, 0, INPUT);
    dioSetPinDirection(2, 0, INPUT);
    dioSetPinDirection(3, 0, INPUT);

    dioSetPinValue(0, 0, 1);
    dioSetPinValue(1, 0, 1);
    dioSetPinValue(2, 0, 1);
    dioSetPinValue(3, 0, 1);

    while (1) {
        if (dioGetPinValue(0, 0) == 0) {
            for (u8 i = 0; i < 128; i++) {
                dioSetPortValue(3, 0x03);
                _delay_ms(3);
                dioSetPortValue(3, 0x06);
                _delay_ms(3);
                dioSetPortValue(3, 0x0C);
                _delay_ms(3);
                dioSetPortValue(3, 0x09);
                _delay_ms(3);
            }
            _delay_ms(1000);
        }
        else if (dioGetPinValue(1, 0) == 0) {
            for (u8 i = 0; i < 128; i++) {
                dioSetPortValue(3, 0x01);
                _delay_ms(3);
                dioSetPortValue(3, 0x02);
                _delay_ms(3);
                dioSetPortValue(3, 0x04);
                _delay_ms(3);
                dioSetPortValue(3, 0x08);
                _delay_ms(3);
            }
            _delay_ms(1000);
        }
        else if (dioGetPinValue(2, 0) == 0) {
            for (u8 i = 0; i < 64; i++) {
                dioSetPortValue(3, 0x01);
                _delay_ms(3);
                dioSetPortValue(3, 0x03);
                _delay_ms(3);
                dioSetPortValue(3, 0x02);
                _delay_ms(3));
                dioSetPortValue(3, 0x06);
                _delay_ms(3);
                dioSetPortValue(3, 0x04);
                _delay_ms(3);
                dioSetPortValue(3, 0x0C);
                _delay_ms(3);
                dioSetPortValue(3, 0x08);
                _delay_ms(3);
                dioSetPortValue(3, 0x09);
                _delay_ms(3);
            }
            _delay_ms(1000);
        }
        else if (dioGetPinValue(3, 0) == 0) {
            for (u8 i = 0; i < 3; i++) {
                dioSetPortValue(3, 0x01);
                _delay_ms(3);
                dioSetPortValue(3, 0x03);
                _delay_ms(3);
                dioSetPortValue(3, 0x02);
                _delay_ms(3);
                dioSetPortValue(3, 0x06);
                _delay_ms(3);
                dioSetPortValue(3, 0x04);
                _delay_ms(3);
                dioSetPortValue(3, 0x0C);
                _delay_ms(3);
                dioSetPortValue(3, 0x08);
                _delay_ms(3);
                dioSetPortValue(3, 0x09);
                _delay_ms(3);
            }
            _delay_ms(1000);
        }
    }
    return 0;
}
