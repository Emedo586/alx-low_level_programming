#include "lists.h"

/**
 * list_len - functions to determine length of the linked list
 * @h: pointer to the first node
 * Return: size list
 */

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
