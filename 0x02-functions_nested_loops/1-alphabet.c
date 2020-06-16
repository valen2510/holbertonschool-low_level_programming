#include "holberton.h"
/**
 * print_alphabet - entry point
 * prints alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alph;
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}

	_putchar('\n');
}

