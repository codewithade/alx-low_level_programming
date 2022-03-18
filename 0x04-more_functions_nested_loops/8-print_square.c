#include <stdio.h>
/**
 * print_square - Entry point
 *
 * @size: Size of square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
	putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
}
