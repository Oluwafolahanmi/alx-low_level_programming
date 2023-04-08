#include "main.h"
#include <stddef.h>


/*
 * print_binary - function
 * @n - function parameter
 */

void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int num;

	count = 0;
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
