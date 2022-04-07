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
if (grid == NULL || height == 0)
	return;
free(*grid);
free(grid);
}
