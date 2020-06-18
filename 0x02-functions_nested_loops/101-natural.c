#include <stdio.h>
/**
 * main - entry point
 * Return: sucess 0
 */
int main(void)
{
	int x, sum;

	sum = 0;

	for (x = 1023; x >= 0; x--)
	{

		if ((x % 3) == 0 || (x % 5) == 0)
		{

			sum += x;
		}
	}

	printf("sum = %d\n", sum);
	return (0);
}
