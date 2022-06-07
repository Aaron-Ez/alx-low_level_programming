#include "main.h"

/**
 * print_alphabet_x10 - print all small letter alphabets 10
 * times within new line each
 */

void print_alphabet_x10(void)
{
	int x;
	char h;

	for (x = 0; x < 10; x++)
	{
		for (h = 97; h < 123; h++)
			_putchar(h);
		_putchar('\n');
	}
}
