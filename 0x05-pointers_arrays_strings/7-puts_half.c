#include "holberton.h"
/**
 * puts_half - print the second half
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;

	while (*(str + i) != '\0')
		i++;

	if (i % 2 != 0)
	{
		i += 1;
	}
	for (half = i / 2; *(str + half) != '\0'; half++)
	{
		_putchar(*(str + half));
	}
	_putchar('\n');
}

