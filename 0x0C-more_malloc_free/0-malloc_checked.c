#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - returns a ptr to alloc me
 *
 * @b: size
 *
 * Return: a pointer to alloc memory
 */
void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
