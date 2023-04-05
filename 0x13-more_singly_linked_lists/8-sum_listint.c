#include "lists.h"
#include <stdio.h>

/*
 * sum_listint - function adds data of a list
 * @head - function parameter
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *trans;

	sum = 0;
	trans = head;
	while (trans != NULL)
	{
		sum += trans->n;
		trans = trans->next;
	}
	return (sum);

}
