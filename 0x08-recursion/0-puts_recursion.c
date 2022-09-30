#include "main.h"

/**
 * _puts_recursion - function that print a string
 * @s: string to be printing
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_put_recursion(++s);
	}
	else
		_putchar('\n');

}
