#include "main.h"

/**
 * swap_int - swaps two integers value
 * @a: the first num
 * @b: the second num
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
