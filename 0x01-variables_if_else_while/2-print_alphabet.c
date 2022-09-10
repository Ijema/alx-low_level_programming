#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: Write a program that prints the alphabet in lowercase, followed by a new line.
 *
 *
 *
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *
 * All your code should be in the main function
 *
 * You can only use putchar twice in your code
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);\n
				putchar('0' + c);\n
			}
			c++;
		}
		d++;
	}
	return (0);
}
