#include "holberton.h"
/**
 * _strstr -locate a first ocurrence of substring
 * @haystack: string
 * @needle: substring
 * Return: &haystack[i] (Success) 0 (Not found)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			for (; needle[j] != '\0'; j++)
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
