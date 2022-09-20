#include "main.h"

/**
 * _strcpy - Entry
 *
 * @dest: A buffer to copy the string to.
 * @src: A source string to cpoy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}
