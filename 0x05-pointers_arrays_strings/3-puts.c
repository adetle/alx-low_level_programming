#include "main.h"

/**
 * _puts - Entry
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	
	_putchar('\n');
}
