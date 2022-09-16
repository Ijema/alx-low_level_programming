#include "main.h"
#include <unistd.h>
/**
 * main - _putchar declaration
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
