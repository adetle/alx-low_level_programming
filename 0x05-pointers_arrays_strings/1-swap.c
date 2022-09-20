#include "main.h"

/**
 * swap_int - Entry
 * @a: first swap int
 * @b: second swap int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
