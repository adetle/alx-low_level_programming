#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Entry point
 *
 * @n: function to determine the last digit of a number
 *
 * Return: Always 0;
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);
	_putchar('0' + _abs(last_digit));
	return (_abs(last_digit));
}
