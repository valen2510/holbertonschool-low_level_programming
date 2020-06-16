#include "holberton.h"
/**
 * _islower - point entry checking if c is lowercase
 * @c: char check
 * Return: 1 (true) 0 (false)
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
	}
	return (0);
}

