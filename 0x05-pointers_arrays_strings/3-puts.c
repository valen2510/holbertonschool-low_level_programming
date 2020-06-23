#include "holberton.h"
/**
 * _puts - print a string
 * @str: array
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
