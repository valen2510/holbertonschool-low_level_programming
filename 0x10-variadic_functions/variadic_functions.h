#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void character(va_list c);
void integer(va_list i);
void floatelement(va_list f);
void string(va_list s);

/**
 * struct types - type structure for arguments
 * @ch: list of types of arguments
 * @func: function pointer of each list element
 */
typedef struct types
{
	char *ch;
	void (*func)();
} types;

#endif
