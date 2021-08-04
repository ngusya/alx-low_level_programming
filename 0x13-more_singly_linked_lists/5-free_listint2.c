#include "lists.h"

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: pointer to a struct
* Return: a number
*/
void free_listint2(listint_t **head)
{
listint_t *savepoint;

if (head != NULL)
{
while ((*head)->next != NULL)
{
savepoint = (*head)->next;
free(*head);
*head = savepoint;
}
free(*head);
*head = NULL;
}
}
