#include <stdio.h>
/**
 * print_diagonal - Entry point
 *
 * @n: Numer of diagonals to print
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int j;

if (n <= 0)
	putchar('\n');
else
{
for (j = 0; j <= n; j++)
{
print_space(j);
putchar('\\');
putchar('\n');
}
}
}

/**
 * print_space -  Prints a space
 *
 * @n: Number of spaces to print
 *
 * Return: Always 0 (Success)
 */
void print_space(int n)
{
int i;

for (i = 0; i < n; i++)
	putchar(' ');
}
