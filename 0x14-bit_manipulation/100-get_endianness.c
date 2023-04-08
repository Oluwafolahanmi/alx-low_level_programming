#include "main.h"

/*
 * get_endianness - function
 * return- return char
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*) & i;

	return (*c);
}
