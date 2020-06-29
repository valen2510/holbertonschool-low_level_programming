#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string pointer
 * @accept: pointer characters to find
 * Return: Number of characters found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		if(count != i)
			break;

		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count += 1;
			j++;
		}
		i++;
	}
	return (count);
}
