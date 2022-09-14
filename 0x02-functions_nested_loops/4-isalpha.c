#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: character to check for letter
 *
 * Return: a or A;
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
