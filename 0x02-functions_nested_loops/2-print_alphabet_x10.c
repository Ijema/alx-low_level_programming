#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *  * main - check the code.
 *
 *    * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(y);
		}
		putchar('\n');
	}
}
