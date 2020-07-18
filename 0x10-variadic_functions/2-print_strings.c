#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);

		if (!p)
			printf("(nil)");
		else
			printf("%s", p);

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
