#include <stdio.h>
/**
 * print_sign - Entry point
 *
 * @n: Number to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
void print_sign(int n)
{
if (n == 0)
{
	putchar('0');
	putchar('0');
}
else if (n < 0)
{
	putchar('-');
	putchar('1');
}
else
{
	putchar('+');
	putchar('1');
}
}
