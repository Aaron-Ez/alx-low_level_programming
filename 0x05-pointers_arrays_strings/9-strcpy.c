#include "main.h"

/**
 * _strcpy - copy string from source to dest
 * @dest: the string to which copy to
 * @src: the source of the string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
