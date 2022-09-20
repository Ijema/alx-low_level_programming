#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character in the string
 * @str: string where the character is to be printed from
 * Return: character in the string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
