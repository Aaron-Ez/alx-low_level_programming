#include "main.h"

/**
 * leet - encodes a string
 * @s: accepts a string
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char a[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j] || s[i] == (a[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}

	return (s);
}
