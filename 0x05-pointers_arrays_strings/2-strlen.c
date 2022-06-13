#include "main.h"

/**
 * _strlen - prints the length of the argument
 * s - takes string value
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int x = 0;
	int i;

	for(i = 0; s[i] > 0; i++)
	{
		x++;
	}

	return (x);
}
