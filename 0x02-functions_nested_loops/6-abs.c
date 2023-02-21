#include "main.h"
/**
 * _abs - print function
 * @a: print parameter
 * Return: 0
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);

}
