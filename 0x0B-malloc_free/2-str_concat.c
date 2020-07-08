#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second String
 * Return: p (Success) NULL (Fail)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l, count;
	char *p;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	count = i + j;
	p = malloc(sizeof(char) * (count + 1));

	if (p == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}

	for (l = 0; l < j; l++)
	{
		p[k + l] = s2[l];
	}
	p[k + l] = '\0';

	return (p);
}
