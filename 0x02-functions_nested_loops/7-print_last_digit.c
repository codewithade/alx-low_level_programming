#include <stdio.h>
/**
 * print_last_digit - Entry point
 *
 * @n: Number to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 1)
	n = n * (-1);
putchar(last_digit + '0');
last_digit = n % 10;
return (last_digit);
}
