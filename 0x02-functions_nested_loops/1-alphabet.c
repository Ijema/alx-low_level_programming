#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	char *x;

	for (*x = "A"; *x <= 36; *x++)
		putchar(tolower(*x));
	putchar('\n');
	return (0);
}
