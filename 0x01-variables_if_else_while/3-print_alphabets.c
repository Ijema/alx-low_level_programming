#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: Print lowercase alphabets followed by uppercase then a new line
 * Return : Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x));
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}
