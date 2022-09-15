#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * @n: function to print time across 24 hours
 *
 * Return: Always 0;
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar('0' + (x / 10));
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
