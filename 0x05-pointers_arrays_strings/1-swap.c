#include "holberton.h"
/**
 * swap_int - swap the values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
