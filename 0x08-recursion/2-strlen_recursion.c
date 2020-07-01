#include "holberton.h"
/**
 * _strlen_recursion - Lenght of a string
 * @s: String
 * Return: Length Value
 **/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
