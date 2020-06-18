#include "holberton.h"
/**
 * _isupper - chec uppercase character
 * @c: character value
 * Return: 1 (True) 0 (False)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
