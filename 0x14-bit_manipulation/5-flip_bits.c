#include "main.h"

/*
 * flib_bits - function
 * @n - function parameter
 * @m - function parameter
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current, exc_value = n ^ m;

	for (i = sizeof(n) * 8 - 1 ; i >= 0; i--)
	{
		current = exc_value >> i;
		if (current & 1)
			count++;
	}
	return (count);

}
