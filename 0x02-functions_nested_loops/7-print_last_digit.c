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

last_digit = n % 10;
return (last_digit);
}
