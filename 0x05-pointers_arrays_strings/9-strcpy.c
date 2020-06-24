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

	n = 0;
	while (n < i && src[n])
	{
		dest[n] = src[n];
		n++;
	}
	while (n < i)
	{
		dest[n] = '\0';
		n++;
	}
	return (dest);
}

