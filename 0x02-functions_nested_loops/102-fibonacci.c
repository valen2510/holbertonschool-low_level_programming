#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	long int t, n1, n2, n3;

	n1 = 1;
	n2 = 2;

	for (t = 0; t <= 50; t++)
	{
		n3 = n1 + n2;

		if (t != 50)
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
