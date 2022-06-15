#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 0 if the are the same else s1-s2
 */

int _strcmp(char *s1, char *s2)
{
	while ( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == &s2 )
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
