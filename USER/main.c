#include "stm32f10x.h"
#include "iic.h"
#include "oled.h"

int main(void)
{ 
	IIC_Init();		      //IIC��ʼ�� 
  OLED_Init();				//��ʼ��OLED
	OLED_CLS();
	OLED_ShowString(0,0,"ALIENTEK",24);  
	OLED_ShowString(0,24, "0.96' OLED TEST",16);  
 	OLED_ShowString(0,40,"ATOM 2014/3/7",12);  

//	delay_ms(200);
//	  while(1)
//	{
//	   for(x=0;x<128;x=(x+1)%128)
//		{
//			OLED_DrawWave(x,accur*adcx);//���Ǹ������εĺ���
//		}
//	}
}


