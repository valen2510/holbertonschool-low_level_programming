#include "holberton.h"
#include <stdlib.h>
/**
 * array_range -array of integers
 * @min: minimun integer
 * @max: maximun integer
 * Return: temp (Success) NULL (Failed)
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int *temp;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	temp = p;

	if (!p)
		return (NULL);

	while (min <= max)
		*p++ = min++;

	return (temp);
}
