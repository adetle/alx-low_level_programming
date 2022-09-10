#include <stdlib.h>
#include <time.h>
/**
 * Main - entry point
 *
 * Description: page for podtove and negative assign number
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	printf("%d is positive %d\n", n);
	return (0);
}
