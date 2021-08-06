#include "lists.h"

/**
* get_nodeint_at_index - the nth node of a listint_t linked list
* @head: pointer to a struct
* @index: is a number
*
* Return: a address
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *headcopy;
unsigned int i;

headcopy = head;
if (headcopy != NULL)
{
for (i = 0; (i < index) && (headcopy != NULL); i++)
headcopy = headcopy->next;
return (headcopy);
}
else
return (NULL);
}
