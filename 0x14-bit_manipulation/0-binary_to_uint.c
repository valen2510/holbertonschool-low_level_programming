#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: conv_number (converted number)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_number, exp;

	conv_number = 0;
	exp = 0;

	b = _end_string(b);

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '1')
			conv_number += _pow(2, exp);

		exp++;
		--b;
	}

	return (conv_number);
}

/**
 * _pow - base raised to power of exp
 * @base: base
 * @exp: exponent
 * Return: result of base raised to exp
 */
int _pow(int base, int exp)
{
	if (exp == 0)
		return (1);

	base = base * _pow(base, exp - 1);

	return (base);
}
/**
 * _end_string - reach end of the string
 * @ptr: pointer to string
 * Return: pointer at the end
 */
const char *_end_string(const char *ptr)
{
	for (; *ptr; ptr++)
	{
		if (*ptr != '1' && *ptr != '0')
			return (0);
	}

	--ptr;
	return (ptr);
}
