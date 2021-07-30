#include "lists.h"

/**
* print_list - fills memory with a constant byte
* @h: is the owner of the dog
* Return: a number
*/
size_t print_list(const list_t *h)
{
size_t x;

for (x = 0; h != NULL; x++)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
else
{
printf("[%d] %s\n", 0, "(nil)");
h = h->next;
}
}
return (x);
}
