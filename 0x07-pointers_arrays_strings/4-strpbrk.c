#include "holberton.h"
/**
 * _strpbrk -search string for any set of bytes
 * @s: string pointer
 * @accept: pointer to characters to match
 * Return: s (Success) 0 (Not Found)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
