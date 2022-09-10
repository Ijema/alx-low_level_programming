#include <stdio.h>
/**
 *
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x != y)
			{
				putchar(xy);
				if (x < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
