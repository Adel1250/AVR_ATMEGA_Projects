#include "sevenSeg_int.h"
#include "dio_int.h"
#include "standard_types.h"

void displayNumber(u8 portNumber, u8 value) {
    dioSetPortDirection(portNumber, OUTPUT);
    u8 numbers[10] = {0b11000000, 0b11111001, 0b10100100, 0b10110000, 0b10011001, 0b10010010, 0b10000010, 0b11111000, 0b00000000, 0b10010000};
    dioSetPortValue(portNumber, numbers[value]);
}