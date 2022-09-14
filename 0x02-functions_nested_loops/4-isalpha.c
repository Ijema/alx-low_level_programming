#include "main.h"
#include <ctype.h>
/**
 * _isalpha - entry point
 *
 * @c: The character to be checked
 * Return: Always 1 if c letter is lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
