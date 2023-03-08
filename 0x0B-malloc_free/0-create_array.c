#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 *create_array - function creates an array of chars
 *@c: character
 *@size: size of memory to print
 *
 * Return: NULL if 0 or fail else return ptr
*/

char *create_array(unsigned int size, char c)
{
  unsigned int a;
  char *s;

  if(size == 0)
    {
      return (NULL);
    }
  s = malloc(size * sizeof(*s));
  if(s == NULL)
    {
      return (NULL);
    }
  for (a = 0; a< size; a++)
    {
      s[a] = c;
    }
  return (s);

  free(s);
}
