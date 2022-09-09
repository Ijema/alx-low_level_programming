#include <stdlib.h>
#include <time.h>

/* More headers goes here */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand()-RAND_MAX / 2;
	/* Your code goes here */
	return (0);
}
