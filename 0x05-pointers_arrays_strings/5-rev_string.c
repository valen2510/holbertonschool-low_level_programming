#include "holberton.h"
/**
* rev_string - reverse string
* @s: string
*/
void rev_string(char *s)
{
	int i1, i2, tmp;

	i1 = 0;
	while (*(s + i1) != '\0')
	{
		i1++;
	}
	i1 -= 1;
	i2 = 0;
	while (i2 < i1)
	{
		tmp = *(s + i2);
		*(s + i2) = *(s + i1);
		*(s + i1) = tmp;
		i2++;
		i1--;
	}
}

