#include "lists.h"

/**
* print_listint- prints lists of elements
* @h: pointer to a struct
*
* Return: a number
*/
size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
