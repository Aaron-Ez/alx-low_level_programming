#include <stdio.h>
#include <stdlib.h>

/**
 * main - Description: print alphabets a-z
 * by using putchar() function
 * Return: 0
 */
int main(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}

	return (0);
}
