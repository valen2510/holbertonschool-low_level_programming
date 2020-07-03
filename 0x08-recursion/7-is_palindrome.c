#include "holberton.h"
/**
 * is_palindrome - check if string is palindrome
 * @s: entry string
 * Return: 1 (Success) 0 (Not found)
 */
int is_palindrome(char *s)
{
	int l;

	l = length(s);
	return (find_palindrome(s, 0, l - 1));
}

/**
 * length - find string length
 * @s: entry string
 * Return: length
 */
int length(char *s)
{
	int count = 0;

	if (*s)
	{
		count = length(s + 1);
		count++;
	}
	return (count);
}

/**
 * find_palindrome - find palindrome string
 * @s: Entry string
 * @start: string start position
 * @end: string end position
 * Return: 1 (Success) 0 (Not found)
 */
int find_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);

	else
		return (find_palindrome(s, start + 1, end - 1));
}


