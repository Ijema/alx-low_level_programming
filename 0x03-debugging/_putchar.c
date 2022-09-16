#include "main.h"
#include <unistd.h>
/**
 * main - _putchar declaration
 */
void _putchar(char c)
{
	return(write(1, &c, 1));
}
