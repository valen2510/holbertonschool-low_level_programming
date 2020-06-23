#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @s: array
 *
 */
void print_rev(char *s)
{
	int i1, i2;

	i1 = 0;
	while (*(s + i1) != '\0')
	{
		i1++;
	}

	i2 = i1 - 1;
	while (i2 >= 0)
	{
		_putchar(*(s + i2));
		i2--;
	}

	_putchar('\n');
}
