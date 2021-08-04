#include "lists.h"

/**
* free_listint - frees a list 
* @head: pointer to a struct
* Return: a number
*/
void free_listint(listint_t *head)
{
listint_t *savepoint;

if (head != NULL)
{
while (head->next != NULL)
{
savepoint = head->next;
free(head);
head = savepoint;
}
free(head);
}
}
