#include "holberton.h"
/**
 * puts2 - print every other character
 * @str:  parameter as a pointer
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i)) % 2 == 0)
		{
			_putchar(*(str + i));
		}

		i++;
	}
	_putchar('\n');
}
