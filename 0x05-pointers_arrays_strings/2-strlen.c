#include "holberton.h"
/**
 * _strlen - length of string
 * @s: pointer of string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
