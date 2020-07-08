#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Copy of a string
 * @str: String
 * Return: p (Success) NULL (Fail)
 */
char *_strdup(char *str)
{
	unsigned int i, j, length;
	char *p = NULL;

	if (str == NULL)
		return (NULL);

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	p = malloc((length + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (j = 0; j <= length; j++)
	{
		p[j] = str[j];
	}

	return (p);
}
