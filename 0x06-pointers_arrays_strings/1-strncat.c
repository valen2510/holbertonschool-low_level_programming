#include "holberton.h"
/**
 * _strncat - concatenates strings
 * @dest: destined string
 * @src: string to be add
 * @n: bytes from src
 * Return: string resulted
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
