#include <stdio.h>
/**
 * main - entry point
 *
 */
void main(void)
{
	int x, sum;

	for (x = 1023; x >= 0; x--)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{

			sum += x;
		}
	}

	printf("sum = %d\n", sum);
}
