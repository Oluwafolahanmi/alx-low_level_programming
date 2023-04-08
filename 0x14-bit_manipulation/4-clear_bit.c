#include "main.h"

/*
 * clear_bit - function
 * @n - functio9n parameter
 * @index - functio9n parameter
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
