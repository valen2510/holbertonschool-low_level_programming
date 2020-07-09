#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: elements
 * @size: sizeof
 * Return: p (Success) NULL (Failed)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = 0;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(size * nmemb);

	if (!p)
		return (NULL);

	return (p);
}



