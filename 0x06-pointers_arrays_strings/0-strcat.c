#include "holberton.h"
/**
 * *_strcat - concatenates strings
 * @dest: destinated string
 * @src: source string to add
 * Return: dest string result
 */
char *_strcat(char *dest, char *src)
{
	/*this will appends the src string to the dest string*/
	/*First you need the length of your dest*/
	int i, j;

	/*find the length of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/*Run the lenght of src*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
