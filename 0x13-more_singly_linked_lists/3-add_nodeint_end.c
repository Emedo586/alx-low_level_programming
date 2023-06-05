#include "lists.h"

/**
 * *add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: first node pointer
 * @n: new_node value
 * Return: address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *node;
if (!head || !new_node)
return (NULL);
new_node->next = NULL;
new_node->n = n;
if (!*head)
*head = new_node;
else
{
node = *head;
while (node->next)
node = node->next;
node->next = new_node;
}
return (new_node);
}
