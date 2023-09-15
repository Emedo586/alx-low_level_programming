#include "lists.h"

/**
 * dlistint_len - returns length of dlist
 * @h: address of head Node
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t j = 0;

while (h)
{
h = h->next;
j++;
}
return (j);
}
