#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point
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
		printf("n is negative\n");
	} else if (n == 0)
	{
		printf("n is zero\n");
	}
	printf("n is positive %d\n", n);
	return (0);
}
