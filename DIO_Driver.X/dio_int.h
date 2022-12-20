#ifndef DIO_INT_H
#define	DIO_INT_H
#define portA 0
#define portB 1
#define portC 2
#define portD 3
#define OUTPUT 1
#define INPUT 0
#include "standard_types.h"

void dioSetPinDirection(u8 pinNumber, u8 portNumber, u8 direction);
void dioSetPinValue(u8 pinNumber, u8 portNumber, u8 value);
void dioSetPortDirection(u8 portNumber, u8 direction);
void dioSetPortValue(u8 portNumber, u8 value);
u8 dioGetPinValue(u8 pinNumber, u8 portNumber);
void dioToggleBit(u8 pinNumber, u8 portNumber);
#endif

