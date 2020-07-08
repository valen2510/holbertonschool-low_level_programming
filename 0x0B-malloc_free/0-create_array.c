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
	unsigned int i;
	char *p = NULL;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	p[size] = '\0';

	return (p);
}
