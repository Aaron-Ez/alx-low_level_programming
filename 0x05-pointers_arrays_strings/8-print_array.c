#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the content of array as give range
 * @a: accpets array name 
 * @n: accpets the range of the array to prints its content
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i <= n - 2)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
