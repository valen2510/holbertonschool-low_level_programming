#include "holberton.h"
/**
 * _strchr -locate a character ina a string
 * @s: string pointer
 * @c: character to find
 * Return: t (Remaining) 0 (Not found)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}
