#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - iterates over an array
 *
 * @array: array of ints
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action == NULL || array == NULL)
	return;
i = 0;
while (i < size)
{
action(*(array + i));
i++;
}
}
