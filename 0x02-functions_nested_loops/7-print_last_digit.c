#include "holberton.h"
/**
 * print_last_digit - Entry number
 * @d: - number value
 * Return: last digit of d
 */
int print_last_digit(int d)
{
	int l;

	if (d > 0)
	{
		l = d % 10;
	}
	else
	{
		l = (d * -1) % 10;
	}
	_putchar(l + '0');
	return (l);
}

