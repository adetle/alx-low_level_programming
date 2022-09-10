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
	int x;

	for (x = 0; x <= 9; x++)
	{
		x++;
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
