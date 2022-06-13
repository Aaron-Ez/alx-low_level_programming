#include "main.h"

/**
 * swap_int - swaps two integers value
 * a and b paremets takes two argument
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}
