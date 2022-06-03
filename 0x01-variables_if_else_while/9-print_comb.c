#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 10 numbers
 * with comma and space separated
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(00);
		}
	}

	putchar('\n');

	return (0);
}
