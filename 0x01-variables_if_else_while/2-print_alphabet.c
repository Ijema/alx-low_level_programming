#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Description: Write a program that prints the alphabet in lowercase, followed by a new line.
 * You can only use putchar twice in your code
 * Return: always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x); /* The returned value is returned as a parameter */
	}
	putchar('\n');
	return (0);
}
