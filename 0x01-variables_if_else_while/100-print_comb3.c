#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
int a;
int b;

for (i = 0; i < 100; i++)
{
a = i / 10;
b = i % 10;

putchar('0' + a);
putchar('0' + b);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
