#include "holberton.h"
/**
 * _print_rev_recursion - Print string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);

	if (*s >= '\n')
	{
		_putchar(*s);
		--s;
	}
}
