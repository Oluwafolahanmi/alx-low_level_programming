#include "lists.h"
#include <stdlib.h>

/*
 * get_nodeint_at_index - funtion that gets node
 * @head - function parameter
 * @index - function parameter
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *trans;

	a = 0;
	trans = head;
	while (trans != NULL && a < index)
	{
		trans = trans->next;
		a++;
	}
	if (trans != NULL)
		return (trans);
	else
		return (NULL);
}
