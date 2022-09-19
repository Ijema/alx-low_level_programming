#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints strings in reverse order
 * @s: string to be reversed
 * Return: return reversed string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
