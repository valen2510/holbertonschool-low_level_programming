#include "holberton.h"
/**
 * puts_half - print the second half
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, n1, n2;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	if (*(str + i) % 2 != 0)
	{
		n1 = (i - 1) / 2;

		while (*(str + n1) != '\0')
		{
			_putchar(*(str + n1));
			n1++;
		}
	}
	else
	{
		n2 = i / 2;
		while (*(str + n2) != '\0')
		{
			_putchar(*(str + n2));
			n2++;
		}
	}
	_putchar('\n');
}

