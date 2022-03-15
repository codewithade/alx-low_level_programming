#include <stdio.h>
/**
 * print_sign - Entry point
 *
 * @n: Number to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n == 0)
{
	putchar('0');
	return (0);
}
else if (n < 0)
{
	putchar('-');
	return (-1);
}
else
{
	putchar('+');
	return (1);
}
}
