#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all base 10 numbers
 * starting from 0 to 9
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);

	printf("\n");

	return (0);
}
