#include "main.h"

/**
* c function that prints the last digit of a number.
* the input number to check
* Return: int.
*/

int print_last_digit(int x)
{

x %= 10;

if (x < 0)
x *= -1;

_putchar(x + '0');
return (x);
}
