#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '16'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
