#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory
 * @ptr: pointer to previous memory block
 * @old_size: previuos memory block size
 * @new_size: posterior memory block size
 * Return: ptr (Success) NULL (Failed)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (ptr);

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size || !ptr)
	{
		free(ptr);
		ptr = malloc(new_size);

		if (!ptr)
			return (NULL);
	}
	return (ptr);
}
