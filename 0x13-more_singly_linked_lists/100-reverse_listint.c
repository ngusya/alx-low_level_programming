#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to a struct
* Return: a number
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *headcopy, *savepoint;

if (*head != NULL && (*head)->next != NULL)
{headcopy = *head;
savepoint = (*head)->next;
(*head)->next = NULL;
*head = savepoint;
while ((*head)->next != NULL)
{
savepoint = (*head)->next;
(*head)->next = headcopy;
headcopy = *head;
(*head) = savepoint;
}
(*head)->next = headcopy;
}
return (*head);
}
