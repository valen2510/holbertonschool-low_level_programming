#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search.
 * @array: array of integers.
 * @size: size of array.
 * @value: search value.
 * Return: index of search value in array or -1 if doesn't exist in array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index_found = -1;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			index_found = i;
			break;
		}
	}
	return (index_found);
}
