#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all small letter alphabet
 */

void print_alphabet(void)
{
	char h;
	while(h < 58)
	{
		_putchar(h);
		h++;
	}
	_putchar('\n');
}