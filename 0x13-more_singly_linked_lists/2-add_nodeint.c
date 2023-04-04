#include "lists.h"
#include <stdlib.h>

/*
 * add_nodeint - function adds node
 * @head - function parameter
 * @n - function parameter
 * Return- return new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
