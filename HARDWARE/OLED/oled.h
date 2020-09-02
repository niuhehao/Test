#ifndef _OLED_H_
#define _OLED_H_
#include "sys.h"
#include "iic.h"
#include "delay.h"

#define MODE 1

void OLED_Init(void);
void OLED_SetPos(unsigned char x, unsigned char y);
void OLED_Fill(unsigned char fill_Data);
void OLED_CLS(void);
void OLED_ON(void);
void OLED_OFF(void);
void OLED_ShowString(u8 x,u8 y,const u8 *p,u8 size);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);


#endif
