#include <REGX52.H>

typedef unsigned int u16;

sbit led1= P2 ^ 0;//定义P20口是led1
sbit led2 = P2 ^ 1;
sbit led3 = P2 ^ 2;
sbit k1 = P3 ^ 1;	 //定义P31口是k1

void yanshi(u16 i)
{
    while (i--);
}

void anliou()
{
    if (k1 == 0)
    {
        yanshi(5000);//按下的时长
        if (k1 == 0)
		{
			led1 = 0;
            yanshi(100000);
			led1 = 1;
			led2 = 0;
			yanshi(100000);
			led2 = 1;
			led3 = 0;
			yanshi(100000); 			
			led3 = 1;
        }
		led1 = 1;
		led2 = 1;
		led3 = 1;
    }
}


void main()
{
	while (1)
	{
		anliou();
	}
}