#include "standard_types.h"
#include "dio_int.h"
#include "bit_math.h"
#include "dio_reg.h"

void dioSetPinDirection(u8 pinNumber, u8 portNumber, u8 direction) {
    switch (portNumber) {
        case portA:
            if (direction == OUTPUT) {
                SET_BIT(DDRA_REG, pinNumber);
            } else if (direction == INPUT) {
                CLR_BIT(DDRA_REG, pinNumber);
            }
            break;
        case portB:
            if (direction == OUTPUT) {
                SET_BIT(DDRB_REG, pinNumber);
            } else if (direction == INPUT) {
                CLR_BIT(DDRB_REG, pinNumber);
            }
            break;
        case portC:
            if (direction == OUTPUT) {
                SET_BIT(DDRC_REG, pinNumber);
            } else if (direction == INPUT) {
                CLR_BIT(DDRC_REG, pinNumber);
            }
            break;
        case portD:
            if (direction == OUTPUT) {
                SET_BIT(DDRD_REG, pinNumber);
            } else if (direction == INPUT) {
                CLR_BIT(DDRD_REG, pinNumber);
            }
            break;
    }
}

void dioSetPinValue(u8 pinNumber, u8 portNumber, u8 value) {
    switch (portNumber) {
        case portA:
            if (value == 1) {
                SET_BIT(PORTA_REG, pinNumber);
            } else if (value == 0) {
                CLR_BIT(PORTA_REG, pinNumber);
            }
            break;
        case portB:
            if (value == 1) {
                SET_BIT(PORTB_REG, pinNumber);
            } else if (value == 0) {
                CLR_BIT(PORTB_REG, pinNumber);
            }
            break;
        case portC:
            if (value == 1) {
                SET_BIT(PORTC_REG, pinNumber);
            } else if (value == 0) {
                CLR_BIT(PORTC_REG, pinNumber);
            }
            break;
        case portD:
            if (value == 1) {
                SET_BIT(PORTD_REG, pinNumber);
            } else if (value == 0) {
                CLR_BIT(PORTD_REG, pinNumber);
            }
            break;
    }
}

void dioSetPortDirection(u8 portNumber, u8 direction) {
    switch (portNumber) {
        case portA:
            if (direction == OUTPUT) {
                DDRA_REG = 0xFF;
            } else if (direction == INPUT) {
                DDRA_REG = 0x00;
            }
            break;
        case portB:
            if (direction == OUTPUT) {
                DDRB_REG = 0xFF;
            } else if (direction == INPUT) {
                DDRB_REG = 0x00;
            }
            break;
        case portC:
            if (direction == OUTPUT) {
                DDRC_REG = 0xFF;
            } else if (direction == INPUT) {
                DDRC_REG = 0x00;
            }
            break;
        case portD:
            if (direction == OUTPUT) {
                DDRD_REG = 0xFF;
            } else if (direction == INPUT) {
                DDRD_REG = 0x00;
            }
            break;
    }
}

void dioSetPortValue(u8 portNumber, u8 value) {
    switch (portNumber) {
        case portA:
            PORTA_REG = value;
            break;
        case portB:
            PORTB_REG = value;
            break;
        case portC:
            PORTC_REG = value;
            break;
        case portD:
            PORTD_REG = value;
            break;
    }

}

u8 dioGetPinValue(u8 pinNumber, u8 portNumber) {
    u8 value = 2;
    switch (portNumber) {
        case portA:
            value = GET_BIT(PINA_REG, pinNumber);
            break;
        case portB:
            value = GET_BIT(PINB_REG, pinNumber);
            break;
        case portC:
            value = GET_BIT(PINC_REG, pinNumber);
            break;
        case portD:
            value = GET_BIT(PIND_REG, pinNumber);
            break;
    }
    return value;
}

void dioToggleBit(u8 pinNumber, u8 portNumber) {
    switch (portNumber) {
        case portA:
            TOG_BIT(PORTA_REG, pinNumber);
            break;
        case portB:
            TOG_BIT(PORTB_REG, pinNumber);
            break;
        case portC:
            TOG_BIT(PORTC_REG, pinNumber);
            break;
        case portD:
            TOG_BIT(PORTD_REG, pinNumber);
            break;
    }
}