#include "holberton.h"
/**
 * print_sign -entry point to print the sign of  number
 * @n: int check
 * Return: 1 (>0) 0 (=0) -1 (<0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);

	}
	return (0);
}
