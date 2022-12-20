#define F_CPU 8000000UL
#include "dio_int.h"
#include <util/delay.h>

int main(void) {
    dioSetPinDirection(0, 0, OUTPUT);
    dioSetPinValue(0, 0, 0);
    dioSetPinDirection(4, 2, INPUT);
    dioSetPinValue(4, 2, 1);
    while (1) {
        if (!dioGetPinValue(4, 2)) {
            dioToggleBit(0, 0);
            _delay_ms(500);
        }
    }
    return 0;
}
