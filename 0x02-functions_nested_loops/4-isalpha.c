#include "main.h"
#include <ctype.h>
/**
 * isalpha - entry point
 *
 * Return: Always 1 if letter is lowercase or uppercase
 * Return: Always 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >='a' && c <='z')
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
