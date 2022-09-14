#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints number fron n to 98
 * @n: n is the starting number to be printed
 * Return: return the printed values
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
			printf("%d\n", n);
	}
}

