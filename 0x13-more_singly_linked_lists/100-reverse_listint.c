#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to first node in the linked list.
 * Return: pointer to the first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = old;
old = *head;
*head = next;
}
*head = old;
return (*head);
}
