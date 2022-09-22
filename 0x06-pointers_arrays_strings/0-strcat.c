#include "main.h"
/**
 * *_str - function to concatenate 2 strings
 * @dest: string to be concatenated
 * @src: strings to be concatenated
 * Return: return the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}
