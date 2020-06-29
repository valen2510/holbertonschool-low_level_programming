#include "holberton.h"
/**
 * _strstr -locate a first ocurrence of substring
 * @haystack: string
 * @needle: substring
 * Return: &haystack[i] (Success) 0 (Not found)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; haystack++)
	{
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
		{
			i++;
		}
		if (!needle[i])
			return (haystack);
	}

	return (0);
}
