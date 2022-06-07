#include "main.h"

/**
 * _abs - give absolute value of given input
 * @r: accept input and checks its input
 * Return: gives absolute of a value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
