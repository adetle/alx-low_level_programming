#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0;
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int j;
	
	for (j = 0; j < 10; j++);
	{
		for (; i <= 'z'; i++);
		{
			_putchar(i);
		}
		_putchar('\n');

	}
}
