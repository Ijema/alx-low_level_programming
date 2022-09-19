#include "main.h"
#include <string.h>
/**
 * rev_string - A function that prints a string in a reverse manner
 * @s: string to be reversed
 * Return: return reversed string
 */
void rev_string(char *s)
{
	int i;
	char strng;
	int len = strlen(s);

	for (i = 0; i <= len; i--)
	{
		strng = s[i];
		_putchar(strng);
	}
}
