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
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
continue;
}

for (j = 0; src[j] != '0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
