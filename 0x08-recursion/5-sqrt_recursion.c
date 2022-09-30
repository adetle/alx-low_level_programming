#include "main.h"

/**
 * sqrt_int - square of number
 *
 * @x: check number
 * @y: iterator
 *
 * Return: check square
 */
int sqrt_int(int x, int y)
{
	int sqr = y * y;

	if (sqr == x)
		return (y);
	if (sqr > x)
		return (-1);
	return (sqrt_int(x, y + 1));
}

/**
 * _sqrt_recursion - square root of numbers
 *
 * @n: target number to be square
 *
 * Return: natural square of number or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_int(n, 1));
}
