#include "holberton.h"
/**
 * print_line - print n lines
 * @n: value
 */
void print_line(int n)
{
	int l;

	l = 0;
	while (l < n)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
		l++;
	}
	_putchar('\n');
}
