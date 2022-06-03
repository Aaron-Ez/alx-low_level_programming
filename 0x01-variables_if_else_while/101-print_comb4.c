#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 3 digit base 10 numbers
 * and each digit cannot be same
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 58; x++)
	{
		for (y = x; y < 58; y++)
		{
			for (z = y; z < 58; z++)
			{
				if (x == y || y == z || x == z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x < 55)
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
