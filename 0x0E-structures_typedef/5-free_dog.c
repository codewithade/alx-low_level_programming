#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free alloc dog
 *
 * @d: dog to dealloc
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d == NULL)
	return;
free(d);
}
