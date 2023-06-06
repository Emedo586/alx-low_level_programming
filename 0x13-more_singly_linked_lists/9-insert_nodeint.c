#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first node of linked list.
 * @idx: list index where new node is added.
 * @n: data for new node
 * Return: address of the node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (j = 0; tmp && j < idx; j++)
{
if (j == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
else
tmp = tmp->next;
}
return (NULL);
}
