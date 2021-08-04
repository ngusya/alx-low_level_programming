#include "lists.h"

/**
* returns the number of elements in listint_len
* @h: pointer to a struct
* Return: a number
*/
size_t listint_len(const listint_t *h)
{
size_t x;

for (x = 0; h != NULL; x++)
h = h->next;
return (x);
}
