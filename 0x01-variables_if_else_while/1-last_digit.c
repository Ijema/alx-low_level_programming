#include <stdlib.h>
#include <stdio.h>
#include <srdio.h>
#include <time.h>

/** more headers goes there */

/** betty style doc for function main goes there */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
		printf(The number entered is a positive number);
		}else{
			printf("The number entered is a negative number")
	return (0);

}
