#include <stdio.h>
/**
 * main - Entry point Prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x != y && y != x)
			{
				if (x, y != x, y)
				{
					putchar(x);
					putchar(y);
					if (x < '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
