#include "main.h"

/**
 * _islower checks if its lowercase or uppercase
 *
 */

int _islower(int c)
{
	int x;
 	if (c >= 97 && c <= 122)
		x=1;
	else
		x=0;

	return x;
}
