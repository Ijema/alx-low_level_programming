#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n = 0)
	{
		printf("%i is zero\n", n);
	} 
	elseif (n<0) 
	{
		printf("%i is negative\n",n);
	} 
	else 
	{ 
		printf("%i is positive\n", n);
	}
	return (0);
}
