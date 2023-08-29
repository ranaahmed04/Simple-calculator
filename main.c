#include"STD_TYPES.h"
#include"BIT_MATH.H"

#include<avr/io.h>
#include<avr/delay.h>

#include"DIO.h"
#include"LCD.h"
#include"Key.h"



u32 calculate(u32 num1, u32 num2, u8 op);

void main(void)
{

	u16 Local_U8ReturnedKey=KPD_CHECK;
	LCD_VidInit();
	KPD_VidInit();

	u8 operation=0;
	u32 result,num1,num2;


	/* ensure LCD is clear */
	LCD_VidCLR();
	while(1)
	{
		Local_U8ReturnedKey=KPD_U8PressedKey();
		while(Local_U8ReturnedKey==KPD_CHECK && operation == 0)
		{
			Local_U8ReturnedKey=KPD_U8PressedKey();
		}

		LCD_VidSendChar(Local_U8ReturnedKey);
		num1 =Local_U8ReturnedKey-48;


		Local_U8ReturnedKey=KPD_U8PressedKey();
		while(Local_U8ReturnedKey==KPD_CHECK && operation == 0)
			{
				Local_U8ReturnedKey=KPD_U8PressedKey();
				if (Local_U8ReturnedKey =='+'|| Local_U8ReturnedKey =='-'|| Local_U8ReturnedKey =='/'|| Local_U8ReturnedKey =='*'||Local_U8ReturnedKey =='=')
				 {
				    operation = Local_U8ReturnedKey;
				    LCD_VidSendChar(Local_U8ReturnedKey);
					break;

				  }
				else if (Local_U8ReturnedKey!=KPD_CHECK)
				{
					num1= num1*10 +Local_U8ReturnedKey-48;
					LCD_VidSendChar(Local_U8ReturnedKey);
					Local_U8ReturnedKey=KPD_CHECK;
				}


			}
			Local_U8ReturnedKey=KPD_U8PressedKey();

			while(Local_U8ReturnedKey==KPD_CHECK && operation !='=')
					{
						Local_U8ReturnedKey=KPD_U8PressedKey();
					}

			LCD_VidSendChar(Local_U8ReturnedKey);
			num2 =Local_U8ReturnedKey-48;


			Local_U8ReturnedKey=KPD_U8PressedKey();
			while(Local_U8ReturnedKey==KPD_CHECK && operation !='=')
						{
							Local_U8ReturnedKey=KPD_U8PressedKey();

							if (Local_U8ReturnedKey =='=')
							 {
								LCD_VidSendChar(Local_U8ReturnedKey);
							    result = calculate(num1,num2,operation);
							    if((num2>num1)&(operation='-'))
							    {
							    	LCD_VidSendChar('-');
							    	 LCD_voidSendNumber(result);
							    	    _delay_ms(1000);
							            num1=0;
							    	    num2=0;
							    		operation=0;
							    		LCD_VidCLR();
							    		break;
							    }
							    else if((num2==0 )&(operation='/'))
							    {
							    	LCD_VidSendString("Undefined");
							        _delay_ms(1000);
							    	 num1=0;
							    	 num2=0;
							    	 operation=0;
							    	 LCD_VidCLR();
							    	 break;
							    }
							    LCD_voidSendNumber(result);
							    _delay_ms(1000);
							    num1=0;
							    num2=0;
							    operation=0;
							   LCD_VidCLR();

								break;
							   }
							else if (Local_U8ReturnedKey!=KPD_CHECK)
							{
								num2=num2*10+Local_U8ReturnedKey-48;
								LCD_VidSendChar(Local_U8ReturnedKey);
								Local_U8ReturnedKey=KPD_CHECK;

							}

			}

	}
}



u32 calculate(u32 num1, u32 num2, u8 op)
{

    switch (op)
    {
    case '+':
        return (num1 + num2);
        break;
    case '-':
    	if(num2>num1)
    	{
    		 return (num2 - num1);
    	}
    	else
    		return (num1 - num2);
        break;
    case '*':
        return (num1 * num2);
        break;
    case '/':
    	return (num1 / num2);
        break;
    default:
    	return 0;
    }
}



