#include "main.h"
/**
 * _isupper - checks if character is uppercase or not
 * @c: the character to be tested
 * Return: return 1 if c is uppercase or 0 if it is not
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
