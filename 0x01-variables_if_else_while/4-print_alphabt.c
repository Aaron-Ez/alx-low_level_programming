#include <stdio.h>
#include <stdlib.h>

/**
 * main - Description print all alphabets
 * except e and q
 * Return 0
 */
int main(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
