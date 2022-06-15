#include "main.h"

/**
 * _strncpy - copy a string from src to dest
 * @dest: the place where the source copies to
 * @src: the string which is copied
 * @n: the length of the string to copy
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
