#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @s: accept string
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
			for (j = 0; delimit[j] != '\0'; j++)
			{
				if (s[i] == delimit[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}

	return (s);
}
