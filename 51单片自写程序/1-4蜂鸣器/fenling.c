#include <REGX52.H>
#include <intrins.h>		

typedef unsigned int u16;//对数据类型进行声明定义

sbit beep = P2 ^ 5;//蜂鸣器
sbit led = P2 ^ 0;//LED灯
void delay(u16 i)//延时函数，i=1时，大约延时10us
{
	while(i--);
}

void main()//主函数
{
	while (1)
	{
		beep = ~beep;
		led=0;
		delay(50000);
		led=1;
		beep = beep;
		delay(50000);
		
	}
}