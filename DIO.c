#include<stdio.h>
#include"BIT_MATH.H"
#include"STD_TYPES.h"
#include<avr/io.h>
#include"DIO.H"

//function for DDR register to determine if it is input or output

void DIO_VidSetPinDirection(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Direction)
{
    if(Copy_u8Direction ==1)
    {
        switch(Copy_u8Port){
         case 0: SET_BIT(DDRA,Copy_u8Pin);break;// =DDRA|=0x01
         case 1: SET_BIT(DDRB,Copy_u8Pin);break;
         case 2: SET_BIT(DDRC,Copy_u8Pin);break;
         case 3: SET_BIT(DDRD,Copy_u8Pin);break;
        }
    }
	else if(Copy_u8Direction ==0)
	{
		 switch (Copy_u8Port){
         case 0: CLR_BIT(DDRA,Copy_u8Pin);break;// =DDRA|=0x00
         case 1: CLR_BIT(DDRB,Copy_u8Pin);break;
         case 2: CLR_BIT(DDRC,Copy_u8Pin);break;
         case 3: CLR_BIT(DDRD,Copy_u8Pin);break;
		 }
	}
}

//function for PORT register to determine if it is will be pullup or pulldown 
void DIO_VidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value)
{
	if(Copy_u8Value==1)// hena 3lashan atl3 0 volt
	{
		switch (Copy_u8Port){
         case 0: SET_BIT(PORTA,Copy_u8Pin);break;
         case 1: SET_BIT(PORTB,Copy_u8Pin);break;
         case 2: SET_BIT(PORTC,Copy_u8Pin);break;
         case 3: SET_BIT(PORTD,Copy_u8Pin);break;
		}
	}
	else if(Copy_u8Value==0)// hena 3lashan atl3 5 volt
	{
		 switch (Copy_u8Port){
         case 0: CLR_BIT(PORTA,Copy_u8Pin);break;
         case 1: CLR_BIT(PORTB,Copy_u8Pin);break;
         case 2: CLR_BIT(PORTC,Copy_u8Pin);break;
         case 3: CLR_BIT(PORTD,Copy_u8Pin);break;
		 }
	}
}
//B3ml set li al port kolo 3n tari2 al regiester DDR
void DIO_VidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction)
{
	switch(Copy_u8Port) {
		case 0: DDRA =Copy_u8Direction;break;
		case 1: DDRB =Copy_u8Direction;break;
		case 2: DDRC =Copy_u8Direction;break;
		case 3: DDRD =Copy_u8Direction;break;
	}
}

void DIO_VidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value)
{
	switch(Copy_u8Port) {
		case 0: PORTA =Copy_u8Value;break;
		case 1: PORTB =Copy_u8Value;break;
		case 2: PORTC =Copy_u8Value;break;
		case 3: PORTD =Copy_u8Value;break;
	}
}

u8 DIO_U8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	u8 Return_Value;
	switch(Copy_u8Port) {
		case 0: Return_Value =GET_BIT(PINA,Copy_u8Pin);break;
		case 1: Return_Value =GET_BIT(PINB,Copy_u8Pin);break;
		case 2: Return_Value =GET_BIT(PINC,Copy_u8Pin);break;
		case 3: Return_Value =GET_BIT(PIND,Copy_u8Pin);break;
	}
	return Return_Value;
}

void DIO_VidTogglePin(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	switch(Copy_u8Port) {
		case 0: TOG_BIT(PORTA,Copy_u8Pin);break;
		case 1: TOG_BIT(PORTB,Copy_u8Pin);break;
		case 2: TOG_BIT(PORTC,Copy_u8Pin);break;
		case 3: TOG_BIT(PORTD,Copy_u8Pin);break;
	}
}

