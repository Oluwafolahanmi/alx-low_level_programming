#include "main.h"

/*
 * set_bit - function
 * @n - function parameter
 * @index - function parameter
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
