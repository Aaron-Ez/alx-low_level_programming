#include "main.h"

/**
 * print_most_numbers - print all number 0 to 9
 * except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if ( c == 2 || c == 4)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
