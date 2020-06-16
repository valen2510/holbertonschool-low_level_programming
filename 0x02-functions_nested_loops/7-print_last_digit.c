#include "holberton.h"
/**
 * print_last_digit - Entry number
 * @d: - number value
 * Return: last digit of d
 */
int print_last_digit(int d)
{
	int l;

	l = d % 10;
	if (d >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = l * -1;
		_putchar(l + '0');
		return (l);
	}
}
