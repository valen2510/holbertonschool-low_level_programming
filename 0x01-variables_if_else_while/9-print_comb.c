#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write numbers separated for commas
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
