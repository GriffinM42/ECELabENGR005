#include <msp430.h> 
int main(void){
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
float div(int a, int b);
int mod(int a, int b);
int pow(int a, int b);

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    int num1, num2;   // Declare two integer variables 'num1' and 'num2'.
    int sum, diff, prod, rem, power;   // Declare variables to store the results of arithmetic operations.
    float quot;   // Declare a float variable 'div' to store the result of the division.

    num1=10;
    num2=5;


    //Performs all arithmetic operations
    sum = add(num1, num2);   // Calculate the sum of 'num1' and 'num2'.
    diff = sub(num1, num2);   // Calculate the difference between 'num1' and 'num2'.
    prod = mult(num1, num2);  // Calculate the product of 'num1' and 'num2'.
    quot = div(num1, num2);   // Calculate the division of 'num1' by 'num2' and cast the result to a float.
    rem = mod(num1, num2);   // Calculate the modulus of 'num1' and 'num2'.
    power = pow(num1, 5); //// Calculate powrr of 'num1' is 'num2'.

    while(1);

    return 0;   // Return 0 to indicate successful execution of the program.
}

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

float div(int a, int b){
    return (float)a / b;
}

int mod(int a, int b){
    return a % b;
}

int pow(int a, int b){
    int c = 1;
    int i;
    for(i = 0; i < b; i++){
        c *= a;
    }
    return c;
}
