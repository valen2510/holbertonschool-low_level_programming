#include "holberton.h"
/**
 * leet - encode to 1337
 * @s: String
 * Return: encoded string
 **/
char *leet(char *s)
{
	int i, j;

	char u[] = {'A', 'E', 'O', 'T', 'L'};
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == u[j] || s[i] == l[j])
				s[i] = n[j];

		}
	}
	return (s);
}
