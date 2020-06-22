#include <stdio.h>
/**
 * main - entry point first fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	long int t, n1, n2, n3, sum;

	n1 = 0;
	n2 = 1;
	sum = 0;

	for (t = 0; t < 50; t++)
	{
		n3 = n1 + n2;

		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%ld\n", sum);
	return (0);
}
