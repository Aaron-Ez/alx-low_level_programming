#include "main.h"

/**
 * times_table - it prints times table starting with 0
 * 9 times
 * Return: void (noting)
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if ((z / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(z + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
