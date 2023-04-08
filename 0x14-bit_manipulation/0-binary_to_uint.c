#include "main.h"
#include <stddef.h>
/*
 * binary_to_unit - function that converts binary to decimal
 * @b - function parameter
 * return - zero or decimal
 */


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
