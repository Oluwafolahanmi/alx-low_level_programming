#include <stdio.h>
#include "lists.h"

/*
 * listint_len - function returns the number of elements
 * in a linked list
 * @h - function parameter
 * Return - the numeber of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodecount = 0;
	
	while (h != NULL)
	{
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
