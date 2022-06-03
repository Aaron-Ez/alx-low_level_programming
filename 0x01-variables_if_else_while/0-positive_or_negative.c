#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Description: Get a random number
 * checks if random number is positive print is positive
 * if random number is negative print is negative
 * if random number is zero print is zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n == 0)
		printf("%i is zero",n);
	else if(n > 0)
		printf("%i is positive",n);
	else
		print("%i is negative",n);
	return (0);
}
