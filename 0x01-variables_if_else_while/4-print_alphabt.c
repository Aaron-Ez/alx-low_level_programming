#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all lowercase alphabets
 * but except e and q
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == 'e' || d == 'q')
			continue;
		putchar(d);
	}

	putchar(d);

	return (0);
}
