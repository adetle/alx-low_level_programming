#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0;
 */

void print_alphabet(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
