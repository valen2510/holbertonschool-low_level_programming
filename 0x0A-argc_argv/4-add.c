#include <stdio.h>
#include <stdlib.h>
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
		n = atoi(argv[i]);

		if (n > 0)
			sum += n;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
