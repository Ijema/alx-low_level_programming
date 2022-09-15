#include "main.h"
/**
 * print_numbers - the function that prints numbers from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int i, sum;

	for (i = 0; i <= 9; i++)
	{
		sum += i;
		_putchar(sum);
	}
	_putchar('\n');
}
