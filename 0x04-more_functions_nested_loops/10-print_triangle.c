#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 *
 * @size: Size of triangle to print
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int j, s, c;

c = 1;
if (size <= 0)
	putchar('\n');
else
{
for (j = 0, s = size - 1; j < size; j++, s--, c++)
{
print_char(s, ' ');
print_char(c, '#');
putchar('\n');
}
}
}

/**
 * print_char-  Prints a space
 *
 * @n: Number of times to print @c
 *
 * @c: Character to print
 *
 * Return: Always 0 (Success)
 */
void print_char(int n, char c)
{
int i;

for (i = 0; i < n; i++)
	putchar(c);
}
