#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocates memory
* @b: size of memory block to be  allocated
*
* Return: Pointer to the address of the memory block
*/
void *malloc_checked(unsigned int b)
{
  void *p;
  p = malloc(b);
  if (p == NULL)
    exit(98);
  return (p);
}
