#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int f;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	f = s1[i] - s2[i];
	return (f);
}
