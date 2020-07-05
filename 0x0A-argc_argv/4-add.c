#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - Entry point. Add numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char **argv)
{
	int i, n;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (digit(argv[i]))
		{
			n = atoi(argv[i]);
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * digit - find if character is digit
 * @s: String pointer
 * Return: 0 (Not found) 1 (Success)
 */
int digit(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (!isdigit(s[j]))
			return (0);
	}
	return (1);
}
