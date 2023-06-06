#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked lists.
 * @head: first node address
 * Return: head node’s data or 0 if empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
return (0);
temp = *head;
n = (*head)->n;
*head = (*head)->next;
free(temp);
return (n);
}
