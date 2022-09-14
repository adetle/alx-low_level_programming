#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: function to determine absolute value of an int
 *
 * Return: absolute;
 */

int _abs(int n)
{
	if (n > 0)
	{
		return(n);
	} else 
		return(n * -1);
}
