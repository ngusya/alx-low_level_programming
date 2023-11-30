#include <stdio.h>
#include <stdlib.h>
/**
*main - EntryPoint
*@argc: count
*@argv: vector
*
*Return: always 0
*/

int main(int argc, char *argv[])
{
int res;
int a;
int b;

if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
res = a *b;
printf("%d\n", res);
}
return (0);
}
