#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h, *new_node;
unsigned int index, cont = 0;

/* create node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* border case for insert at the beginning */
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;
return (*h);
}
/* search of position to insert */
index = idx - 1;
while (temp && cont != index)
{
cont++;
temp = temp->next;
}

/* general case */
if (cont == index && temp)
{
new_node->prev = temp;
new_node->next = temp->next;
if (temp->next)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
free(new_node);
return (NULL);
}
