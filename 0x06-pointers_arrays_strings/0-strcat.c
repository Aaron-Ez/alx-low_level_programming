#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the destination of the strings
 * @src: the source of the string to concatnate
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
