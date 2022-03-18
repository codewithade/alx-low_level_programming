#include <stdio.h>
/**
 * print_line - Entry point
 *
 * @n: Numer of lines to print
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int j;

if (n <= 0)
	putchar('\n');
else
{
for (j = 0; j < n; j++)
	putchar('_');
putchar('\n');
}
}
