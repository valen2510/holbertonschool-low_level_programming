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
	size_t i, step = sqrt(size), post_i = step;

	if (!array || !size)
		return (-1);

	for (i = 0; post_i < size && value > array[post_i]; i += step)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		post_i += step;
	}
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%lu] and [%lu]\n", i, post_i);
	for (; array[i] <= value && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
