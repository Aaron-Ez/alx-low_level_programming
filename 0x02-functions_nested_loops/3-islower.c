#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	int x;
	if (c >= 97 && c <= 122)
		x = 1;
	else
		x = 0;

	return (x);
}
