#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocates to grid
 *
 * @width: width of 2D array
 *
 * @height: height f 2D array
 *
 * Return: pointer to 2D int array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **p;

if (width <= 0 || height <= 0)
	return (NULL);

p = (int **)malloc(height * sizeof(int *));
if (p == NULL)
	return (NULL);

*p = (int *)malloc(sizeof(int) * height * width);
if (*p == NULL || p == NULL)
{
free(*p);
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
	p[i] = (*p + width * i);
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
