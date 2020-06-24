#include "holberton.h"
/**
 * _strcpy - copy string to dest
 * @src: source string
 * @dest: destined string of copy
 * Return: copied string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (src[i])
	{
		i++;
	}

	for (n = 0; n < i && src[n] != '\0'; n++)
		dest[n] = src[n];

	for (; n < i; n++)
		dest[n] = '\0';

	return (dest);
}

