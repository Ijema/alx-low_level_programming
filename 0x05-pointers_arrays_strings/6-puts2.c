#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character in the string
 * @str: string where the character is to be printed from
 * Return: character in the string
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for(i = 0; i < len; i+=2)
	{
		putchar(str[i]);	
	}
	_putchar('\n');
}
