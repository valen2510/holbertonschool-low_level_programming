#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point. Multiplication of two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char **argv)
{
	unsigned int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
	}

	printf("%d\n", n1 * n2);
	return (0);
}

