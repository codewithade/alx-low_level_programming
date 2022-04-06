#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees 2D grid
 *
 * @grid: grid to free up
 *
 * @height: height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	free(*(grid + i));
}
