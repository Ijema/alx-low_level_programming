#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints number fron n to 98
 * @n: n is the starting number to be printed
 * Return: return the printed values
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
	}
	if (n < 98)
	{
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n >= 98)
	{
		_putchar(n);
	}
	if (n > 98)
	{
		_putchar(',');
		_putchar(' ');
		n--;
	}
}

