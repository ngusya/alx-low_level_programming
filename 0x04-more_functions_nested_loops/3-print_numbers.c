#include "holberton.h"
/**
* print_numbers - prints numerical digits.
* Return: 0 - doesn't return anything.
*/
void print_numbers(void)
{
char c = '0';
while (c <= '9')
{
_putchar(c);
c++;
_putchar('\n');
}
}
