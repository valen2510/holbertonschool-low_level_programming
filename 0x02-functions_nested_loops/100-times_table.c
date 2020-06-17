#include "holberton.h"
/**
 * print_times_table - prints n times table
 * @n: value of times
 */
void print_times_table(int n)
{
	int f, c, r;

	if (n >= 0 && n <= 15)
	{

		for (f = 0; f <= n; f++)
		{
			for (c = 0; c <= n; c++)
			{
				r = f * c;
				if (c == 0)
					_putchar(r + '0');
				if (c != 0 && r < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r > 9 && r <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
