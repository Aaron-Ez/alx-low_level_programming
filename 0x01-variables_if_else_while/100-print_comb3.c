#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 2 digit base 10
 * numbers cannot be repeated in both side
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = x; y < 58; y++)
		{
			if (x == y)
			{
				continue;
			}
			else
			{
				putchar(x);
				putchar(y);
				if (x < 57)
				{
					putchar(44);
					putchar(' ');
					if (x < 56)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
