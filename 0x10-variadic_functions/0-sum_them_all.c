#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 *
 * @n: number of chars
 *
 * Return: sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

if (n == 0)
	return (0);

sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
	sum += va_arg(ap, int);
}
va_end(ap);

return (sum);
}
