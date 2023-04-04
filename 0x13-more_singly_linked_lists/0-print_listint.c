#include "lists.h"
#include <stdio.h>

/*
 * print_listint - function that prints the lists of node
 * @h - function parameter
 */

size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h= h->next;
		nodecount++;
	}
	return (nodecount);
}

