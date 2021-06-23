#include "holberton.h"
/**
* print_last_digit - return last digit
* @n : number to check
* Return:0 or 1
*/

int print_last_digit(int n)
{
int n;

if (n < 0)
n = -n;
a = n % 10;
_putchar (a + '0');
return (a);
}
