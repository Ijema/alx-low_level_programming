#include <main.h>
#include <ctype.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	int x;

	for (x = "A"; x <= 36; x++)
		_putchar(tolower(x));
	_putchar('\n');
	return (0);
}
