#include "lists.h"

/**
* sum_listint
* @head: pointer to a struct
* Return: a address
*/
int sum_listint(listint_t *head)
{
listint_t *headcopy;
int sum = 0;

headcopy = head;
if (headcopy != NULL)
{
while (headcopy->next != NULL)
{
sum += headcopy->n;
headcopy = headcopy->next;
}
sum += headcopy->n;
return (sum);
}
else
return (0);
}
