#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the values of array
 * @n: number of elements
 * @a: array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
