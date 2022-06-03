#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 2 digit numbers in a pair 2 times
 * ignore repeated sequence b/n two paires
 * Return: 0
 */
int main(void)
{
int x;
int y;
int i;
int j;

for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		for (x = i; x < 58; x++)
		{
			for (y = i; y < 58; y++)
			{
				if (x == j && y == i)
					continue;
				else
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (i < 57 || j < 56 || x < 57 || y < 57)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
}

putchar('\n');

return (0);
}
