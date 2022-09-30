#include "main.h"

/**
 * _sqrt_recursion - square root of numbers
 *
 * @n: targt number
 *
 * Return: natural square 0r -1
 */

int sqrt_int(int x, int y)
{
	int sqr = y * y;

	if (sqr == x)
		return (y);
	if (sqr > x)
		return (-1);
	return (sqrt_int(y + 1, x));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_int(n, 1));
}
