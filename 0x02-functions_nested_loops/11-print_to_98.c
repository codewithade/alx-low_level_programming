#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - Entry point
 *
 * @n: Second Number to add
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int MAX;

MAX = 98;
if (n > MAX)
{
for (; n <= MAX; n--)
{
if (n == MAX)
	printf("%d\n", n);
else
	printf("%d, ", n);
}
}
else
{
for (; n <= MAX; n++)
{
if (n == MAX)
	printf("%d\n", n);
else
	printf("%d, ", n);
}
}
}
