#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - copy of the string given as a parameter.
 * @width: pointer parameter.
 * @height:  poinet pointer.
 * Return: pointer to a 2 dimensional array of integers
 **/
int **alloc_grid(int width, int height)
{
	int i, i2;
	int **p = 0;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **)malloc(height * sizeof(int *));
	if (!p)
		return (0);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (!p[i])
		{
			free(p);
			for (i2 = 0; i2 <= i; i2++)
			{
				free(p[i2]);
			}
			return (0);
		}
		for (i2 = 0; i2 < width; i2++)
		{
			p[i][i2] = 0;
		}
	}
	return (p);
}
