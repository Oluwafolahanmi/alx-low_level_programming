#include "lists.h"
#include <stdlib.h>
/*
 * free_listint - function that frees a node
 * @head - function parameter
 *
 */

void free_listint(listint_t *head)
{
	listint_t *trans; /*declare a pointer of the struct*/

	while (head != NULL)
	{
		trans = head->next; /*the next struct is stored in trans*/
		free(head);  /*delete the head*/
		head = trans; /*make trans the  new head*/

	/*continue the loop until the end ie head becomes null*/
	}

}
