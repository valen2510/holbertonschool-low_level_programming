#include "variadic_functions.h"
/**
 * sum_them_all -sum all parameters
 * @n: total number of arguments
 * Return: sum (Success) 0 (No arguments given)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	if (!n)
		return (0);

	sum = 0;
	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);

	va_end(list);

	return (sum);
}
