#include "holberton.h"
/**
 * string_toupper - change lowercase to uppercase
 * @a: pointer
 * Return: Result from a
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
