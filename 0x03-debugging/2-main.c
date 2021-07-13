#include <stdio.h>
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
int a, b, c;
int largest;

a =-98;
b = 0;
c = 978;

largest = largest_number(a, b, c);


if(a >= b && a >= c)
printf("%d is the largest number\n", largest);

return (0);
}
