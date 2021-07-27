#include <stdio.h>
/**
* main -Entry point
* @argc: argument count.
* @argv: unused.
*
* Return: always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
int i;

if (argc == 1)
{
i = 0;
}
else
{
i = argc - 1;
}
printf("%d\n", i);
return (0);
}
