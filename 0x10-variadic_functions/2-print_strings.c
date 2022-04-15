#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *
 * @separator: string separator
 * @n: Number of elements (args)
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *arg;
unsigned int i;
va_list ap;

if (separator == NULL)
	separator = "";

va_start(ap, n);
for (i = 0; i < n; i++)
{
	arg = va_arg(ap, char *);
	if (i == (n - 1))
		separator = "";
	if (arg == NULL)
		arg = "(nil)";
	printf("%s%s", arg, separator);
}
putchar('\n');
va_end(ap);
}
