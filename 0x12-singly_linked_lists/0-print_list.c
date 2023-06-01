#include "lists.h"

/**
 * print_list - Functions to print a linked lists.
 * @h: pointer the to first node
 * Return: the number of nodes printed.
 */

size_t print_list(const list_t *h)
{
size_t k = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
printf("[%u] %s\n", h->len, h->str);
h = h->next;
k++;
}
return (k);
}
