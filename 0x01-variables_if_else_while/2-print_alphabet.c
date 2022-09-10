#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
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
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);	
		putchar(x "\n"); /* The returned value is returned as a parameter */
	}
	return (0);
}
