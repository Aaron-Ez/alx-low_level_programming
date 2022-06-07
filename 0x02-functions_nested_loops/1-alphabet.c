#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all small letter alphabet
 */

void print_alphabet(void)
{
	char h = 97;

	while (h < 123)
	{
		_putchar(h);
		h++;
	}

	_putchar('\n');
}