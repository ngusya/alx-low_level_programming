#include "lists.h"

/**
* pop_listint 
* @head: pointer to a struct
* Return: a number
*/
int pop_listint(listint_t **head)
{
listint_t *savepoint;
int savenum;

if (*head != NULL)
{
savepoint = (*head)->next;
savenum = (*head)->n;
free(*head);
*head = savepoint;
return (savenum);
}
else
return (0);
}
