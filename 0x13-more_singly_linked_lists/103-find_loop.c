#include "lists.h"

/**
 * *find_listint_loop - function that finds the loop in a linked list.
 * @head: linked list to be searched
 *
 * Return: node address where the loop starts,or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptnr, *end;
if (head == NULL)
return (NULL);
for (end = head->next; end != NULL; end = end->next)
{
if (end == end->next)
return (end);
for (ptnr = head; ptnr != end; ptnr = ptnr->next)
if (ptnr == end->next)
return (end->next);
}
return (NULL);
}
