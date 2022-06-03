#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 10 numbers
 * using putchar
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
		putchar(c);

	putchar('\n');
	
	return (0);
}
