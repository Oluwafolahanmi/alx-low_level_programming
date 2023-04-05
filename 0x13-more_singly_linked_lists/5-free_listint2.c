#include "lists.h"
#include <stdlib.h>

/*
 * free_listint2 - function that frees a list
 * @head - funcction parameter
 */

void free_listint2(listint_t **head)
{
	listint_t *trans; /*declaring a new struct*/

	if (head == NULL)  /*checks if the head is null and returns if it is*/
		return;

	while (*head != NULL)    /*if its not null, it enters the loop and frees the list*/
	{
		trans = (*head)->next;
		free(*head);
		*head = trans;
	}
	*head = NULL;  /*return the pointer head back to null*/
}
