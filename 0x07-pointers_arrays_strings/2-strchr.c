#include "hoLberton.h"
/**
 * _strchr -locate a character ina a string
 * @s: string pointer
 * @c: character to find
 * Return: t (Remaining) 0 (Not found)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *t;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			t = &s[i];
			return (t);
		}
	}
	return (0);
}
