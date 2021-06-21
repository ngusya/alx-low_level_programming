#include <stdio.h>
/**
 *main-Prints lowercase letters using only putchar
 *
 *Description: a program that prints the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
  char q;
  q = 'a';
  while
    (q <= 'z');
  {
    putchar(q);
    q = q + 1;
  }
  putchar ('\n');
  return (0);
}
