#include "lists.h"
/**
* add_node - fills memory with a constant byte
* @head: pointer to pointer of head of linked list
* @str: is a string
* Return: an address
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t n;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (n = 0; new->str[n] != '\0'; n++)
;
new->len = n;
new->next = *head;
*head = new;
return (*head);
}
