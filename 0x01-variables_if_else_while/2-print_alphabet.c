#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
**/
int main(void)
{
	for (int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}