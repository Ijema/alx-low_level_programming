#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: 'print both upper and lowercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

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
