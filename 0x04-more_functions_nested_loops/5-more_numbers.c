#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
print_num(i);
}
putchar('\n');
}
}

/**
 * print_num - print and number
 *
 * @n: Number to pass to print_num
 *
 * Return: chars
 */
void print_num(int n)
{
if (n / 10)
{
print_num(n / 10);
}
putchar(n % 10 + '0');
}
