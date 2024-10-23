#include <msp430.h> 


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	int a = 23;
	int b;
	unsigned int c = 0xFFFF;
	unsigned char d = 0x00;
	int e = 10;
	float f = 10.1;
	int g = 0;
	float h = 0.0;

	a += 1;
	b = 17/2;

	while(1);
}
