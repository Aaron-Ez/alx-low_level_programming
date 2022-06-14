#include "main.h"

/**
 * puts_half - prints half of the given string argument
 * @str: accepts string argument
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int x = 0;
	int y;
	int z;

	for (i = 0; str[i] > 0; i++)
	{
		x++;
	}

	y = (x-1) / 2;
	z = x / 2;

	if (x % 2 == 0)
	{
		for (i = z; str[i] > 0; i++)
		{
			_putchar(strl[i]);
		}
	}
	else
	{
		for (i = y; str[i] > 0; i++)
		{
			_putchar(strl[i]);
		}
	}
}	
