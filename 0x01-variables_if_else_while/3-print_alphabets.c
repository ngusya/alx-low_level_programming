#include <stdio.h>

/**
* main - Entry point for program.
*
* Return: Success  returns 0.
*/

int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar(x);
    }
putchar('\n');
return (0);
}
