#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from given
 * number n to 98
 * @n: starting number
 * Return: void(noting)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d",n);

			if (n == 98)
				printf("%d",n);
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >=98; n--)
		{
			printf("%d",n);

			if (n == 98)
				printf("%d",n);
			printf(", ");
		}
		printf("\n");
	}
}
