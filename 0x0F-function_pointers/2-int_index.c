#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searchers for an integer
 *
 * @array: array of int to search from
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: -1(no match), 0 or -1(size<=0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp == NULL || size <= 0)
	return (-1);

for (i = 0; i < size; i++)
{
if (cmp(*(array + i)) != 0)
	return (i);
}

return (-1);
}
