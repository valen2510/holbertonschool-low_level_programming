#include <stdio.h>
/**
 * main - Entry point.Print the number of arguments passed into
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	if (*argv[argc - 1])
	printf("%d\n", argc - 1);

	return (0);
}
