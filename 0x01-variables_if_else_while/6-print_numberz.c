#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write characters specified by the argument
 * Return: Always 0
 */
int main(void)
{
short al;
for (al = '0'; al <= '9'; al++)
putchar(al);
putchar('\n');
return (0);
}
