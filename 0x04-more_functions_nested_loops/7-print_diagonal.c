#include "holberton.h"

/**
 * print_diagonal - print \ times
 * @n: times
 */
void print_diagonal(int n)
{
	int i, e;

	i = 0;
	while (i < n)
	{
		if (n > 0)
		{
			e = 0;
			while (e < i)
			{
				_putchar(' ');
				e++;
			}
			_putchar(92);
			_putchar('\n');
		}

		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

