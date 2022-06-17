#include "main.h"

/**
 * rot13 - add 13 to a string single char and replace with it
 * @s: accpets a string argument
 * Return: rotated string
 */

char *rot13(char *s)
{
	int i, j;

	char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char stringrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == string[j])
			{
				s[i] = stringrot[j];i
				break;
			}
		}
	}

	return (s);
}
