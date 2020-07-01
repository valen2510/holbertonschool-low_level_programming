#include "holberton.h"
/**
 * factorial - factorial of number n
 * @n: value
 * Return: Factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
