#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an arrray of chars
 *
 * @size: size of array
 *
 * @c: character to init alloc memmory
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

i = 0;
if (size == 0)
	return (NULL);
p = malloc(sizeof(char) * size);
if (p == NULL)
	return (NULL);
while (i < size)
{
*(p + i) = c;
i++;
}
return (p);
}
