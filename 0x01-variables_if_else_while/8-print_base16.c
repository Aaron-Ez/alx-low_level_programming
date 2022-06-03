#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all numbers of base 16
 * in lowercase followed by new line
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 48; d < 58; d++)
		putchar(d);

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
