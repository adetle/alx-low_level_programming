#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Printing the string function */
	printf("Size of a char: %i byte(s)\n", (int) sizeof(char));    
	printf("Size of an int: %i byte(s)\n", (int) sizeof(int));                                                
	printf("Size of a long int: %i byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", (int) sizeof(long long int));                                         
    	printf("Size of a float: %i byte(s)\n", (int) sizeof(float));
	return (0);
}
