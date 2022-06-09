#include "main.h"

/**
 * _isupper - checks for alphabet whether it is upper 
 * @c: accepts input and checks for uppercase
 * Return: 1 if upper returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
}
