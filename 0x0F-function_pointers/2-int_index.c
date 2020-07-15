#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Search for integers
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer for array
 * Return: i (index of match) -1 (No matches or no size)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

	}
	return (-1);
}
