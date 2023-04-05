#include "lists.h"
#include <stdlib.h>
/*
 * pop_listint - function that returns data after deleting the head
 * @head - function parameter
 * return - struct data after deleeting
 */
int pop_listint(listint_t **head)
{
	listint_t *temp; /*declare a new struct*/
	int a; /*varaiable to store the data in  struct*/

	if (head == NULL || *head == NULL)
		return (0);

	a = (*head)->n;   /*stores the struct data */
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (a);  /*returns the struct data*/
}
