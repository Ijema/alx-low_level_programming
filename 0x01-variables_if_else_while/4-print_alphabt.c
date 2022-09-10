#include <stdio.h>
#include <ctype.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}
