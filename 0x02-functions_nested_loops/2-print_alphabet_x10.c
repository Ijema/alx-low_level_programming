#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always (0).
 */
int main(void)
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
	return (0);
}
