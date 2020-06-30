#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals
 * @a: pointer to 2d array
 * @size: size of 2d array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * (size + 1));
		sum2 += *(a + ((i + 1) * (size - 1)));
	}

	printf("%d, %d\n", sum1, sum2);
}
