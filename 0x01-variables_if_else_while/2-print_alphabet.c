#include <stdio.h>
/**
 * main -Entry point
 * use of putchar to write characters specified by the argument
 * Return: Always 0
 */
int main(void)
{
char al;
for (al = 'a'; al <= 'z'; al++){
putchar(al);
putchar('\n');
return (0);
}
