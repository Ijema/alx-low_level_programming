#include <stdio.h>
/* a program that prints _putchar, followed by a new line. */
int main (void) {
	char *sh = "Holberton"; 
	
	while (*sh)
		{
			putchar(*sh);
			sh++;
		}
		putchar('\n');
		return (0);
}
