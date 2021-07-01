#include "holberton.h"
#include <stdio.h>
/**
* _strncat - Concat 2 strings with limit
* @dest: dest string
* @src: src string
* @n: memory limit for src
*
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int j, k;

for (j = 0; dest[j] != '\0'; j++)
{
continue;
}

for (k = 0; src[k] != '0' && k < n; k++)
{
dest[j + k] = src[k];
}
dest[j + k] = '\0';
return (dest);
}
