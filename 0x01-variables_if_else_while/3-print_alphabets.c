#include <stdio.h>
#include <stdlib.h>

/**
 * main - Description: print alaphabets a-z
 * and A-Z by using putchar() function
 * Return: 0
 */
int main(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for(ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	
	putchar('\n');

	return (0);
}
