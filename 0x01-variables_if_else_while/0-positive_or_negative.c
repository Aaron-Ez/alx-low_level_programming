#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assign a random numebr to int n everytime
 * runs and it executes, and prints by using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("%d is positive\n",n);
	else if(n == 0)
		printf("%d is zero\n",n);
	else if(n < 0)
		printf("%d is negative\n",n);
	return (0);
}
