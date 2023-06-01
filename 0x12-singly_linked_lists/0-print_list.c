#include "lists.h"


/**
 * _strlen - functions to return the length of a string.
 * @s: the string length to check.
 * Return: integer length of string.
 */

int _strlen(char *s)
{
int k = 0;
if (!s)
return (0);
while (*s++)
k++;
return (k);
}

/**
 * print_list - Functions to print a linked lists.
 * @h: pointer the to first node
 * Return: size list.
 */

size_t print_list(const list_t *h)
{
size_t k = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
k++;
}
return (k);
}
