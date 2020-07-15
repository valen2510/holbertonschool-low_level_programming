#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: string to print
 * @f: pointer to function print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
