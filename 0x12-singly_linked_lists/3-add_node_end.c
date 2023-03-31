#include "lists.h"
#include <string.h>

/**
 * add_node_end - function name
 * @head: A points to the head of the list_t
 * @str: added string
 *
 * Return: return NULL or new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupl;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupl = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		len++;

	new->str = dupl;
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
