#include "main.h"
/**
 * print_last_digit - print function
 * @i: print parameter
 * Return: 0
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
