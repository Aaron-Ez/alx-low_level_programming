#include "main.h"

/**
 * numerical - checks for digit
 * @n: takes number
 * Return: 1
 */

int numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - convert string to a number
 * @s: accept String
 * Return: number
 */

int _atoi(char *s)
{
	unsigned int number;
	unsigned int i;
	int sign;

	sign = 1;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (numerical(s[i]))
		{
			number = (s[i] - 48) + number * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	return (number * sign);
}
