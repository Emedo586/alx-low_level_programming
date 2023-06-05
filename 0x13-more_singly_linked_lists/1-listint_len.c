#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer t o the first node
 * Return: size list
 */
size_t listint_len(const listint_t *h)
{
size_t j = 0;
while (h)
{
h = h->next;
j++;
}
return (j);
}
