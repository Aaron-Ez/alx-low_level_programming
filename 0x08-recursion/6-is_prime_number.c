#include "main.h"

/**
 * divisors - checks for prime
 * @n: integer argument
 * @m: integer argument
 * Return: 1 or 0
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - check for prime
 * @n: integer argument
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
