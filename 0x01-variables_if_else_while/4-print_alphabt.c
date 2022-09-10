#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * Main- Entry point
 * Description: program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' || x != 'q')
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}
