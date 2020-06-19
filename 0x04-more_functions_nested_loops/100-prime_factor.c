#include <stdio.h>
/**
 * main - find and print largest number of 612852475143
 * Return: 0 (Sucess)
 */
int main(void)
{
	long int n;
	int d;

	n = 612852475143;
	d = 2;
	while (n != 0)
	{
		if ((n % d) != 0)
		{
			d += 1;
		}
		else
		{
			n = n / d;
			if (n == 1)
			{
				printf("%d", d);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}


