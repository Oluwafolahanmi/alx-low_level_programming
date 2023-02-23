#include "main.h"
/**
 * _isupper - main function
 * @c: function parameter
 * Return: 0
 */

int _isupper(int c)
{
	for (c = 65 ; c < 91 ; c++)
		return (1);
	for (c = 97 ; c < 123 ; c++)
		return (0);
	return (0);
}
