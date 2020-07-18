#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
		va_end(list);
		printf("\n");
}
