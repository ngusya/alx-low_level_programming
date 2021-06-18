#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main()
{
int intType;
float floatType;
long int longIntType;
long long int llongIntType;
char charType;

/* sizeof evaluates the size of a variable */
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llongIntType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
  
return (0);
}
