#include "lists.h"


/**
 * print_dlistint - prints doubly_linked list
 * @h: address of head Node
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
