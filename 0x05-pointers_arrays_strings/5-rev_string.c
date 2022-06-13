#include "main.h"

/**
 * rev_string - reverse a string 
 * @s: accepts string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int temp;
	int len = 0;
	int i;

	for (i = 0; s[i] > 0; i++)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
