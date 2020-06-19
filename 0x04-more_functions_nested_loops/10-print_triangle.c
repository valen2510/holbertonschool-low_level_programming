#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: value
 */
void print_triangle(int size)
{
	int f, c;

	f = 0;
	if (size > 0)
	{
		while (f < size)
		{
			c = 0;
			while (c < size)
			{
				if (c < size - f - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				c++;

			}
			_putchar('\n');
			f++;
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

