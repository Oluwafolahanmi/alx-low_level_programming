#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function name
 * @head: A points to the head of the list_t
 * @str: added string
 *
 * Return: return NULL or new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (ULL);

	new->str = strdup(str);
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
