#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	char y;

	while (x <= '10')
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(tolower(y));
		}
		x++;
		putchar('\n');
	}
	return (0);
}
