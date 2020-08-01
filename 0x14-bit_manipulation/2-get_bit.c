#include "holberton.h"
/**
 * get_bit - get the bit value at a given index
 * @n: integer
 * @index: given index
 * Return: 1 or 0 value found at given index or (-1) Fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >>= index) & 1);
}
