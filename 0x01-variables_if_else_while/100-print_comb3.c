#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write double-numbers separated for commas
 * Return: Always 0
 */
int main(void)
{
	int n;
	int n2;

	for (n = 48; n <= 57; n++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			if (n < n2)
			{
				putchar(n);
				putchar(n2);

				if (n != 56 || n2 != 57)
				{
					putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
