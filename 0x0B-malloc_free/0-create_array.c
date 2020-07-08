#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of char's
 * @size: array size
 * @c: char of initialitation
 * Return: p (Success) NULL (Fail)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	unsigned int i;
	char *p = NULL;

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			p[i] = c;

		return (p);
	}
}
