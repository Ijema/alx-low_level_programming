#include <stdio.h>
/**
 * int _islower(int c) - prototype function .
 *
 * @c:parameter- int c
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	else
		return (0);
	}
}

