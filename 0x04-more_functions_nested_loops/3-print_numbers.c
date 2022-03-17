#include <stdio.h>
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
int j;

for (j = 0; j <= 9; j++)
	putchar(j);
putchar('\n');
}
