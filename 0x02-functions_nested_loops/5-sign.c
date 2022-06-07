#include "main.h"

/**
 * print_sign - checks for if its positive
 * or negative or zero
 * @n: takes input and checks for it
 * Return: 1 if its positive 0 if its zero
 * -1 if its negative
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}

	return (x);
}
