#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 *
 * @name: name to print
 * @f: pointer to function
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
	return;
f(name);
}
