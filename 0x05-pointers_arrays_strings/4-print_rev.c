#include "main.h"

/**
 * print_rev - Entry
 *
 * @x: string reserved.
 */
void print_rev(char *x)
{
	int len = 0, i = 0;

	while (x[i++])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(x[i]);
	}

	_putchar('\n');
}
