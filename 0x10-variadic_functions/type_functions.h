#ifndef TYPE_FUNCTIONS_H
#define TYPE_FUNCTIONS_H

#include "variadic_functions.h"

/**
 * character - print type char argumet
 * @list: type va_list list argument
 */
void character(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * integer - print type int argumet
 * @list: type va_list list argument
 */
void integer(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * floatelement - print type float argumet
 * @list: type va_list list argument
 */
void floatelement(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * string - print type char * argumet
 * @list: type va_list list argument
 */
void string(va_list list)
{
	char *p;

	p = va_arg(list, char *);

	if (!p)
		printf("(nil)");
	else
		printf("%s", p);
}

#endif
