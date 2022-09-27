#include "main.h"

/**
 * _memcpy - this copy byte from  memory area to another
 * @*dest: destination area
 * @*src: source area
 * @n: number of byte to copy
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}
