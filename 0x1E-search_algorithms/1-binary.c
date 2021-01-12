#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm.
 * @array: array of integers.
 * @size: size of array.
 * @value: search value.
 * Return: index of search value in array or -1 if doesn't exist in array.
 */
int binary_search(int *array, size_t size, int value)
{
	int mid = -1;
	size_t low = 0, high = size - 1, i;

	if (!array)
		return (-1);

	while (low < high)
	{
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
