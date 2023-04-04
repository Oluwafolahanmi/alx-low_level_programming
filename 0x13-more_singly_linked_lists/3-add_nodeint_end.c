#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * add_nodeint - function that adds new node to the beginning of a linked list
 * @head - funtion parameter
 * @n - function parameter
 * Return - return the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;
	
	temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return(NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return(new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return(new);
}
