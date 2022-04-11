#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory of size
 *
 * @nmemb: numb of memory
 *
 * @size: size of eachmem
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int *p;

if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
	return (NULL);
for (i = 0; i < nmemb; i++)
	*(p + i) = 0;
return (p);
}
