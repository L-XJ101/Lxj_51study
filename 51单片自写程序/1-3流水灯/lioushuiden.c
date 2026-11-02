#include <REGX52.H>

typedef unsigned char u8;
typedef unsigned int u16;

u8 code flow[8] = { 0x7F, 0xBF, 0xDF, 0xEF, 0xF7, 0xFB, 0xFD, 0xFE };

void delay(u16 i)
{
	while (i--);
}

void main()
{
	while (1)
	{
		u16 e = 0;
		for (e = 0; e < 8; e++)
		{
			P2 = flow[e];
			delay(50000);
		}
		
	}
}