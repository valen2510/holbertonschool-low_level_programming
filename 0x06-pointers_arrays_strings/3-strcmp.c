#include "holberton.h"
/**
 * _strcmp -compare two strings
 * @s1: First string
 * @s2: Second String
 * Return: integer result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}

	return (0);
}
