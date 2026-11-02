#include <REGX51.H>
typedef unsigned char u8;
typedef unsigned int u16;


sbit aprot = P2 ^ 2;
sbit bport = P2 ^ 3;
sbit cport = P2 ^ 4;

u8 code smg_duan[10] = {
	0x3F, // 0
	0x06, // 1
	0x5B, // 2
	0x4F, // 3
	0x66, // 4
	0x6D, // 5
	0x7D, // 6
	0x07, // 7
	0x7F, // 8
	0x6F  // 9
};

void delay(u16 i)
{
	while (i--);
}

void main()
{
	while (1)
	{
		aprot = 1;
		bport = 1;
		cport = 1;
		P0 = smg_duan[1];
		delay(500);
		aprot = 0;
		bport = 1;
		cport = 1;
		P0 = smg_duan[2];
		delay(500);
		aprot = 1;
		bport = 0;
		cport = 1;
		P0 = smg_duan[3];
		delay(500);


	}
}


