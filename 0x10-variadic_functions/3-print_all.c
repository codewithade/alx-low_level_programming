#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anythings
 *
 * @format: list of arg types
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list ap;
int len, a;
char *separator, type, *res;

len = _strlen(format);
a = 0;
separator = ", ";
va_start(ap, format);

while (a < len)
{
	if (a == (len - 1))
		separator = "";
	type = *(format + a);
	switch (type)
	{
	case 'c':
		printf("%c%s", va_arg(ap, int), separator);
		break;
	case 'i':
		printf("%d%s", va_arg(ap, int), separator);
		break;
	case 'f':
		printf("%f%s", va_arg(ap, double), separator);
		break;
	case 's':
		res = va_arg(ap, char *);
		if (res == NULL)
			res = "(nil)";
		printf("%s%s", res, separator);
		break;
	default:
		break;
	}
	a++;
}

putchar('\n');
va_end(ap);
}
/**
 * _strlen - length of char array
 *
 * @s: pointer of char
 *
 * Return: length
 */
int _strlen(const char * const s)
{
int i, count;

if (s == NULL)
	return (-1);
i = 0;
count = 0;

while(*(s + i) != '\0')
{
	count++;
	i++;
}
return (count);
}
