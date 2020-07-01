#include "holberton.h"
/**
 * _pow_recursion - value of x raised to power of y
 * @x: base
 * @y: exponent
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y > 0)
		x = x * _pow_recursion(x, y - 1);

	return (x);
}
