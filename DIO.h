#ifndef DIO_H    /* File Guard */
#define DIO_H


void DIO_VidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction);

void DIO_VidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value);

void DIO_VidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction);

void DIO_VidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value);

u8 DIO_U8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin);

void DIO_VidTogglePin(u8 Copy_u8Port,u8 Copy_u8Pin);


#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define PIN_0  0
#define PIN_1  1
#define PIN_2  2
#define PIN_3  3
#define PIN_4  4
#define PIN_5  5
#define PIN_6  6
#define PIN_7  7

#define DIO_HIGH  1
#define DIO_LOW  0


#define DIO_OUTPOUT 1
#define DIO_INPUT   0


#endif
