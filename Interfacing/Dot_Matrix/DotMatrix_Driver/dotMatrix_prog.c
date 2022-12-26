#define F_CPU 8000000UL
#include <util/delay.h>
#include "dio_int.h"
#include "dotMatrix_int.h"

void displaySymbol(u8 rowPortNumber, u8 colPortNumber, u8 col[]) {
    dioSetPortDirection(rowPortNumber, OUTPUT);
    dioSetPortDirection(colPortNumber, OUTPUT);
    for (u8 i = 0; i < 8; i++) {
        dioSetPortValue(colPortNumber, col[i]);
        dioSetPortValue(rowPortNumber, ~(1 << i));
        _delay_ms(1);
    }
}