#include <math.h>
#include "search_algos.h"
/**
 * jump_search - function that searches for a value
 * in an array of integers using the jump search.
 * @array: array of integers.
 * @size: size of array.
 * @value: search value.
 * Return: index of search value in array or -1 if doesn't exist in array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step = sqrt(size), post_i = 0;
	int index = -1;

	if (!array)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		post_i += step;
		if (value <= array[post_i] || post_i > size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, post_i);
			if (post_i > size - 1)
				post_i = size - 1;
			break;
		}
	}
	for (; i <= post_i; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = array[i];
			break;
		}
	}
	return (index);
}
