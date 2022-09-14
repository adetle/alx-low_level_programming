#include "main.h"

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

	last_digits = (n % 10);
	_putchar('0' + last_digits);
	return (last_digits);
}
