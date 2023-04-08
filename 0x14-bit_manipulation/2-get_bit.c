#include "main.h"

/*
 * get_bit - function
 * @n - function parameter
 * @index - function parameter
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > sizeof(n) * 8 - 1)
		return (-1);
	bitvalue = (n >> index) & 1;
	return (bitvalue);
}
