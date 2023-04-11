#include <reg51.h>
#define uchar unsigned char

void delay(unsigned int i){
	unsigned int j;
	for(;i>0;i--)
	for(j=0;j<333;j++)
	{;}
	}


void main(){
	EA=1;
	EX0=1;
	IT0=0;
	EX1=1;
	IT1=0;
	PX0=1;
	PX1=0;
while(1){

	P2=0;}
}

void int0(void) interrupt 0 using 1
{
	uchar m;
	for(m=0;m<5;m++)
	{
		EX0=0;
		P2=0X0F;
		delay(400);
		P2=0XF0;
		delay(400);
		EX0=1;
	}
}

void int1(void) interrupt 2 using 2
{
	uchar n;
	for(n=1;n<5;n++)
	{
		EX1=0;
		P2 = 0X45;
		delay(400);
		P2 = 0xff;
		delay(400);
		EX1=1;
	}
}