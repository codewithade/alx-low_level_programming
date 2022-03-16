#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * print_num - print any number using putchar
 *
 * @n: Number to pass to print_num
 *
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int r, c, res;

for (c = 0; c <= 9; c++)
{
for (r = 0; r <= 9; r++)
{
res = c * r;
print_num(res);
if (r < 9)
{
putchar(',');
putchar(' ');
putchar(' ');
}
}
putchar('\n');
}
}

void print_num(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
	print_num(n / 10);

putchar(n % 10 + '0');
}
