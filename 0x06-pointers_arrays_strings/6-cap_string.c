#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @s: accept string
 * Return: s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}

	return (s);
}
