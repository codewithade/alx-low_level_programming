#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - returns array range
 *
 * @min: minimum start point
 *
 * @max: max staend point
 */
int *array_range(int min, int max)
{
int *p;
int i, len;

if (min > max)
	return (NULL);
i = 0;
len = max - min + 1;
p = malloc(sizeof(int) * len);
if (p == NULL)
	return (NULL);
while (i < len)
{
*(p + i) = min;
min++;
i++;
}
return (p);
}
