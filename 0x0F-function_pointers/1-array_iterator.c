#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function given parameters
 * @array: array of integers
 * @size: size of array
 * @action: function pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
