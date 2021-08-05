#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
* @m: the other number
* @n: the given number
*
* Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, count = 0;
int size = sizeof(unsigned long int) * 8;

for (x = 0; x < size; x++)
{
if ((n & (1 << 0)) != (m & (1 << 0)))
count++;
n = (n >> 1);
m = (m >> 1);
}
return (count);
}
