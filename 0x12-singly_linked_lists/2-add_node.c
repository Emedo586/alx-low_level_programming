#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: pointer address to the head node
 * @str: str field of node
 *
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *current_head = malloc(sizeof(list_t));
if (!head || !current_head)
return (NULL);
if (str)
{
current_head->str = strdup(str);
if (!current_head->str)
{
free(current_head);
return (NULL);
}
current_head->len = strlen(current_head->str);
}
current_head->next = *head;
*head = current_head;
return (current_head);
}
