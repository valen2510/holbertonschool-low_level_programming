#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point. Print minimun number of coins
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success) 1 (Incorrect number of arguments)
 */
int main(int argc, char **argv)
{
	int n, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = 0;
		n = atoi(argv[1]);

		if (n < 0)
			printf("0\n");
		else
		{
			for (; n >= 25; cents++)
				n -= 25;
			for (; n >= 10; cents++)
				n -= 10;
			for (; n >= 5; cents++)
				n -= 5;
			for (; n >= 2; cents++)
				n -= 2;
			for (; n == 1; cents++)
				n -= 1;
			printf("%i\n", cents);
		}
	}
	return (0);
}
