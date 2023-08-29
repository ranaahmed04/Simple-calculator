#ifndef LCD_H    /* File Guard */
#define LCD_H

#define LCD_DATA_PORT   DIO_PORTA
#define LCD_CMD_PORT    DIO_PORTB


#define RS    PIN_5
#define RW    PIN_6
#define EN    PIN_7

#define FUN_SET  0b00111000
#define C_ON_OFF 0b00001111
#define LCD_CLR  0b00000001

#define LCD_CLR1  0x01

#define LINE_1		0
#define LINE_2		1

void LCD_VidInit(void);
void LCD_VidSendCMD(u8 Copy_U8CMD);
void LCD_VidSendChar(u8 Copy_U8Char);
void LCD_VidSendString(u8 *Copy_U8ptr);
void LCD_VidLocation(u8 Copy_U8Line,u8 Copy_U8CharNum);
void LCD_VidSendSpecialChar(u8 Copy_U8CharNum,u8 *Copy_U8Ptr);
void LCD_voidSendNumber(u32 Copy_u32Number);
void LCD_VidCLR(void);

#endif
