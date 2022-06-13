#include "main.h"

/**
 * _puts - takes arument and prints the arument
 * str - accepts string argument
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] > 0; i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
