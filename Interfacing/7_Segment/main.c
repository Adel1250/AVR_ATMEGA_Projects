#define F_CPU 8000000UL
#include "sevenSeg_int.h"
#include <util/delay.h>

int main(void) {
    while (1) {
        for (u8 i = 0; i < 10; i++) {
            displayNumber(2, i);
            _delay_ms(1000);
        }
    }
    return 0;
}
