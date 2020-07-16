#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - perform the operation
 * @s: string operator
 * Return: Operation perfoming
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == ops[i].op[0] && *++s == '\0')
			return (ops[i].f);

		i++;
	}
	printf("Error\n");
	exit(99);
}
