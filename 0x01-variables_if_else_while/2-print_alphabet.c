#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Prints lower alphabets
 * Return: always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x); /* The returned value is returned as a parameter */
	}
	putchar('\n');
	return (0);
}
