#include "main.h"
/**
 * int _islower(int c) - prototype function .
 *
 * @c:parameter- int c
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'c')
			return (1);
		else
			return (0);
	}
}
