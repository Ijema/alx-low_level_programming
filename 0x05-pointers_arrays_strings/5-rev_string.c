#include "main.h"
#include <string.h>
/**
 * rev_string - A function that prints a string in a reverse manner
 * @s: string to be reversed
 * Return: return reversed string
 */
void rev_string(char *s)
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
