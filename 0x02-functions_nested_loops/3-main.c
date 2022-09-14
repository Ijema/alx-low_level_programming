#include "main.h"
#define _putchar(c) putc(c, stdout)
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
        r = _islower('o');
	putchar(r + '0');
        r = _islower(108);
	putchar(r + '0');
        putchar('\n');
	return (0);
}
