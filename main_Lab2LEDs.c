#include <msp430.h>
#include "GPIO_Driver.h"

void main(void)
{

WDTCTL = WDTPW | WDTHOLD;

gpioInitOut(1, BIT0); //p1.0 red led
gpioInitOut(2, BIT1); //p6.6 green led

gpioInitIn(4, BIT1);
gpioInitIn(2, BIT3);


PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                           // to activate previously configured port settings
int count = 0;
while(1){
        if(gpioInitStatus(4, BIT1) == 0x00){
        _delay_cycles(5000);
        gpioWrite(2, BIT1, 1);

        }else{
            gpioWrite(2, BIT1, 0);
            _delay_cycles(5000);
        }
        }
}
