#include <stdio.h>
#include "main.h"
/**
 * times_table - print 9-times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int r, c, res, is_double;
char gap;

gap = ' ';
is_double = 0;
for (c = 0; c <= 9; c++)
{
for (r = 0; r <= 9; r++)
{
res = c * r;
is_double = print_num(res);
if (r < 9)
{
putchar(',');
if (!is_double)
	putchar(gap);
putchar(gap);
}
}
putchar('\n');
}
}
/**
 * print_num - print any number using putchar
 *
 * @n: Number to pass to print_num
 *
 * Return: Always 0 (Success)
 */
int print_num(int n)
{
int is_double;

is_double = 0;
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
{
is_double = 1;
print_num(n / 10);
}

putchar(n % 10 + '0');
return (is_double);
}
