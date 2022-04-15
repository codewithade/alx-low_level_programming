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
char *separator, type;

if (format ==  NULL)
{
	printf("(nil)\n");
	return;
}

len = _strlen(format);
a = 0;
separator = ", ";
va_start(ap, format);

while (a < (len - 1))
{
	type = *(format + a);
	print_arg(ap, separator, type);
	a++;
}

separator = "";
type = *(format + a);
print_arg(ap, separator, type);

putchar('\n');
va_end(ap);
}
/**
 * print_arg - prints args
 *
 * @ap: valist
 * @separator: separates each args
 * @type: data type identifier
 *
 * Return: Nothing
 */
void print_arg(va_list ap, char *separator, char type)
{
char *res;

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

i = 0;
count = 0;

while(*(s + i) != '\0')
{
	count++;
	i++;
}
return (count);
}
