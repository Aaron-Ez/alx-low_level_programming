#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: Source of data
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;

	}


	return (dest);
}
