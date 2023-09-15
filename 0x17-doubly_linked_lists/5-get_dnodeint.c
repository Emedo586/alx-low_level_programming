#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: pointer to the head of the dlistint list.
 * @index: the node  to locate
 * Return: NULL otherwise the address of the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
