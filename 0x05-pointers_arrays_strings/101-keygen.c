#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = rand();
	srand(time(0));
	printf("%i\n", num);

	return (0);
}
