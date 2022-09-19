#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: the integers to be swaps
 * @b: the integer to be swap
 * Return: return swapped integers
 */
void swap_int(int *a, int *b)
{
	int *swap = NULL;

	*swap = *a;
	*a = *b;
	*b = *swap;
}

