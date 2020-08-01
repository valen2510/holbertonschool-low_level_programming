#include "holberton.h"
/**
 * flip_bits - find number of bits to flip from one number to another
 * @n: first integer
 * @m: second integer
 * Return: (n_bits) number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_difference, n_bits;

	bit_difference = n ^ m;
	n_bits = 0;

	while (bit_difference > 0)
	{
		if (bit_difference & 1)
			n_bits++;

		bit_difference >>= 1;
	}

	return (n_bits);
}
