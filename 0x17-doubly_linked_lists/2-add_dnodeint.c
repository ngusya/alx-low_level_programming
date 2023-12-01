#include "lists.h"
/**
* add_dnodeint - will add a new node at the beginning
* of the dlistint_t list
* @head: head of the list
* @n: value of the element
* Return: returns the address of the new statement
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
new->prev = NULL;

if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
