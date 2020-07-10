#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all arguments
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer (Success) NULL (Failed)
 */
char *argstostr(int ac, char **av)
{
	if (!ac || !av)
		return (NULL);

	else
	{
		int l;
		char *p;

		l = lenght(av);

		p = (char *)malloc(l * sizeof(char));

		if (!p)
			return (NULL);

		else
		{
			char *temp;

			temp = p;

			while (av && *av)
			{
				if (*(*av))
					*p++ = (**av), (*av)++;

				else if (!**av)
					*p++ = '\n', av++;
			}
			*p = '\0';
			return (temp);
		}
	}
}
/**
 * lenght - string length
 * @DoblePointer: double pointer to arguments
 * Return: string length
 */
int lenght(char **DoblePointer)
{
	int Counter =  1;
	int i = 0;

	while (DoblePointer && *DoblePointer)
	{
		if ((*DoblePointer)[i])
			Counter++, i++;
		else if (!(*DoblePointer)[i])
			Counter++, DoblePointer++, i = 0;
	}

	return (Counter);
}

