#include "holberton.h"
/**
 * clear_bit - set to 0 the bit value at a given index
 * @n: pointer to integer
 * @index: index given
 * Return: 1 (Success) -1 (Failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
