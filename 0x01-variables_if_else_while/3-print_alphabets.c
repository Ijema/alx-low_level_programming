#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Entry point
 *Description: Print lowercase alphabets followed by uppercase then a new line
 *Return : Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	/* Your code goes there */
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x)); /* Returns x as a parameter */
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(toupper(y)); /*Returns y as a parameter */
	}
	putchar('\n');
	return (0);
}
