#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets both lower case
 * and upper case using for loop
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);

	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
