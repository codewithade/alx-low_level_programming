#include <stdio.h>
/**
 * print_most_numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
	continue;
putchar(i);
}
putchar('\n');
}
