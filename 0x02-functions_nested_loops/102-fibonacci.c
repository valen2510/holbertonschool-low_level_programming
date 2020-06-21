#include <stdio.h>
/**
 * main - entry point first fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	long int t, n1, n2, n3;

	n1 = 0;
	n2 = 1;

	for (t = 0; t < 50; t++)
	{
		n3 = n1 + n2;

		if (t != 49)
		{
			printf("%ld, ", n3);
		}
		else
		{
			printf("%ld", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
