#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 * print 10 times alp
 */
void print_alphabet_x10(void)
{
char i;
char alp;
i = 48;
	while (i < 58)
	{
		alp = 97;
		while (alp <= 122)
		{
			_putchar(alp);
			alp++;
		}

		_putchar('\n');
		i++;
	}
}
