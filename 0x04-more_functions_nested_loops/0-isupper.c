#include "main.h"

/**
 * _isupper - checks for alphabet whether it is upper 
 * if it is upper prints out 1 else 0
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		printf("%c: %d", c, 1);
	}
	else if (c >= 'a' || c <= 'z')
	{
		printf("%c: %d", c, 0);
	}
}}
