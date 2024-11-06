#include <msp430.h> 
#define GREEN_LED BIT0
#define BUTTON1 BIT1

/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	/*int a = 23;
	int b;
	unsigned int c = 0xFFFF;
	unsigned char d = 0x00;
	int e = 10;
	float f = 10.1;
	int g = 0;
	float h = 0.0;

	a += 1;
	b = 17/2;

	while(1);*/

	P1OUT &= ~BIT0;
	P1DIR |= BIT0;

	P2DIR &= ~BIT3;
	P2REN |= BIT3;
	P2OUT |= BIT3;

	PM5CTL0 &= ~LOCKLPM5;

	int count = 0;

	while(1){
	    if((P4IN & BUTTON1) == 0x00){
	        _delay_cycles(5000);
	        if((P4IN & BUTTON1) == 0x00){
	            P1OUT ^= GREEN_LED;
	        } while ((P4IN & BUTTON1) == 0x00);
	    }
	}
}
