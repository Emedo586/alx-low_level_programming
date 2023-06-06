#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to the first node of the linked list.
 * @index: node index to be deleted.
 * Return: 1 ortherwise -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *current = NULL;
unsigned int j = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (j < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
j++;
}
current = tmp->next;
tmp->next = current->next;
free(current);
return (1);
}
