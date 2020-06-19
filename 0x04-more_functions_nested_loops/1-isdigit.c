#include "holberton.h"
/**
 * _isdigit - check for a digit (0 to 9)
 * @c: value
 * Return: 1 (True) 0 (False)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
