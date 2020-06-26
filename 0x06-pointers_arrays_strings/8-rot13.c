#include "holberton.h"
/**
 * rot13 - encode to rot13
 * @a: string
 * Return: result encoded
 */
char *rot13(char *a)
{
	int i, j;
	char f[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; f[j] != '\0'; j++)
		{
			if (a[i] == f[j])
			{
				a[i] = s[j];
				break;
			}

		}
	}
	return (a);
}

