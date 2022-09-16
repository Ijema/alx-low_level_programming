#include <stdlib.h>
#include "main.h"
#include <time.h>
/**
 * main - entry point
* more headers goes there
* betty style doc for function main goes there
* Return: Always 0. Success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		_putchar("is zero", '\n');
	if (n > 0)
		_putchar("is positive \n");
	if (n < 0)
		_putchar("is negative \n");
	return (0);
}
