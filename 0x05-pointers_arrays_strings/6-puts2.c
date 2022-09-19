#include "main.h"
/**
 * puts2 - prints every character in the string
 * @str: string where the character is to be printed from
 * Return: character in the string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
	i = i + 2;
	}
	_putchar('\n');
}
