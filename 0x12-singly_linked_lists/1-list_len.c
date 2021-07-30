#include "lists.h"

/**
* list_len - fills memory with a constant byte
* @h: const list_t pointer to head of list
* Return: a number
*/
size_t list_len(const list_t *h)
{
size_t x;

for (x = 0; h != NULL; x++)
h = h->next;
return (x);
}
