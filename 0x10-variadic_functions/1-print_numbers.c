#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by new line
 *
 * @separator: char separator
 * @n: number of args
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (separator == NULL)
	separator = "";
va_start(ap, n);

for (i = 0; i < n; i++)
{
	if (i == (n - 1))
		separator = "";
	printf("%d%s", va_arg(ap, int), separator);
}
putchar('\n');
va_end(ap);
}
