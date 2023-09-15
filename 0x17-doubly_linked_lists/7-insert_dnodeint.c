#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node in a dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: new node integer to contain.
 *
 * Return: The address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *new;
if (idx == 0)
return (add_dnodeint(h, n));

for (, idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));
for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistunt_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = tmp;
next->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;

return (new);
}
