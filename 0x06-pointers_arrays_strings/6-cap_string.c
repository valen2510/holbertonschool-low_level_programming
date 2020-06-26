#include "holberton.h"
/**
 * cap_string - capitalize words
 * @a: pointer
 * Return: pointer result
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			if (i == 0)
				a[i] -= 32;

			if (a[i - 1] == 9 || a[i - 1] == 10 || a[i - 1] == 32 || a[i - 1] == 33)
				a[i] -= 32;

			if (a[i - 1] == 40 || a[i - 1] == 41 || a[i - 1] == 44 || a[i - 1] == 46)
				a[i] -= 32;

			if (a[i - 1] == 59 || a[i - 1] == 123 || a[i - 1] == 125)
				a[i] -= 32;
		}
	}
	return (a);
}
