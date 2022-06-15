#include "main.h"

/**
 * _strncat - concatnate to the range its given
 * @dest: destination of the string
 * @src: the source of the string to concatinate
 * @n: the length of the string to concatinate
 * Return: the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}

