#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	/**
	 * main -  prints the alphabet in lowercase, and then in uppercase, followed by a new line.
	 * Return:0 Success
	 */
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x)); /* Returns x as a parameter */
		putchar(toupper(x)); /*Returns y as a parameter */
	}
	putchar('\n');
	return (0);
}
