#include <stdio.h>
/**
* initial - fills memory with a constant byte
* Return: nothing
*/
void initial(void) __attribute__ ((constructor));
void initial(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
