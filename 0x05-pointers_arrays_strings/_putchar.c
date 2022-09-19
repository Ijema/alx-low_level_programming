#include <stdio.h>
/**
 * _putchar - print output
 */
int _putchar(char s)
{
	return(write(1, &s, 1));
}
