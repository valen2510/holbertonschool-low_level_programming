#include "holberton.h"
/**
 * reverse_array - reverse array of integers
 * @n: elements
 * @a: array
 */
void reverse_array(int *a, int n)
{
	int i, t;

	i = 0;

	while (i < n - 1)
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t;
		n--;
		i++;
	}

}
