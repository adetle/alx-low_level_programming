#include "main.h"

/**
 * print_sign - Entry point
 *
 * @c: character  alphabet to see if they are present in a given value *
 * Return: a or A;
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
			return (0);
	} else if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	return (0);
}