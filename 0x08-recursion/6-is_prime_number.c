#include "holberton.h"
/**
 * is_prime_number - integer is prime number
 * @n: integer
 * Return: 1 (Success) 0 (Not Found)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	else
	{
		return (prime(n, n - 1));
	}
}
/**
 * prime - check n with d to know prime number
 * @n: integer
 * @d: divisor
 * Return: 1 (success) 0 (Not found)
 */
int prime(int n, int d)
{
	if (d == 1)
		return (1);

	if (n % d == 0)
		return (0);

	else
		return (prime(n, d - 1));
}
