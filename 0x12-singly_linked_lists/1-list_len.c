#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the nodes of a linked list
 * @h - pounter parameter
 * 
 * Return - nodes
 */

size_t list_len(const list_t *h)
{
        size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
