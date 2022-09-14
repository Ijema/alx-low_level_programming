#include "main.h"
#include <ctype.h>
/**
 * print_alphabet - print lowercase letters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
		_putchar(tolower(x));
	_putchar('\n');
}
