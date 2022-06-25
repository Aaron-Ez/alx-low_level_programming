#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: an input
 * Return: 1 if alphabet or 0 if not alphabet
 */
int _isalpha(int c)
{
	int x;

	if ((c >= 65 && c <= 90) || (c >= 87 && c <= 122))
		x = 1;
	else
		x = 0;

	return (x);
}
