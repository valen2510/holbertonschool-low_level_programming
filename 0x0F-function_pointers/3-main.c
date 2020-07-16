#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point to perform operation
 * @ac: argument counter
 * @av: argumnet vector
 * Return: 0 (Success)
 */
int main(int ac, char **av)
{
	int num1, num2, result;


	if (ac == 4)
	{
		num1 = atoi(av[1]);

		num2 = atoi(av[3]);

		if (num2 == 0 && (av[2][0] == '/' || av[2][0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}

		result = (*get_op_func)(av[2])(num1, num2);
		printf("%d\n", result);
		return (0);

	}

	printf("Error\n");
	exit(98);
}


