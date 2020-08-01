#include "holberton.h"
/**
 * set_bit - set to 1 the bit at the given index
 * @n: pointer to integer
 * @index: given index
 * Return: 1 (Success) -1 (Failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);

}
