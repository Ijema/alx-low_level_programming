#include <stdio.h>
/**
 * _putchar - function to print output
 * @c: the string to be outputed
 * Return: return void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
