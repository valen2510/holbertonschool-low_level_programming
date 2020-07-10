#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with n characters
 * @n: First n bytes of s2
 * @s1: First string
 * @s2: Second string
 * Return: pointer (Success) NULL (Failed)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1, ls2, i;
	char *p = NULL;
	char *temp;

	if (!*s1)
		s1 = "";
	if (!*s2)
		s2 = "";
	ls1 = length(s1);
	ls2 = length(s2);
	if (n > ls2)
	{
		p = malloc(sizeof(char) * (ls1 + ls2 + 1));
		temp = p;
		if (!p)
			return (NULL);
		while (*s1)
			*p++ = *s1, s1++;
		while (*s2)
			*p++ = *s2, s2++;
		*p = '\0';
	}
	else
	{
		p = malloc(sizeof(char) * (ls1 + n + 1));
		temp = p;
		if (!p)
			return (NULL);
		while (*s1)
			*p++ = *s1, s1++;
		i = 0;
		while (i < n)
			*p++ = *s2, s2++, i++;
		*p = '\0';
	}

	return (temp);
}

/**
 * length - string length
 * @s: string
 * Return: length
 */
unsigned int length(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
