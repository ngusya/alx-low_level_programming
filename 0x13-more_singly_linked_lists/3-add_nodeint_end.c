#include "lists.h"

/**
* adds a new node at the end of a list
* @head: pointer to a struct
* @n: is a number
* Return: a address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *headcopy;

headcopy = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
new->next = *head;
*head = new;
}
else
{
while (headcopy->next != NULL)
headcopy = headcopy->next;
new->next = (headcopy)->next;
(headcopy)->next = new;
}

return (*head);
}
