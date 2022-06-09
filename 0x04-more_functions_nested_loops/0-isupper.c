#include "main.h"

/**
 * _isupper - checks for alphabet whether it is upper 
 * if it is upper prints out 1 else 0
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' || c <= 'z')
	{
		return (0);
	}
}
