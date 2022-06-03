#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabets in lower case 
 * starting form small letter a
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
