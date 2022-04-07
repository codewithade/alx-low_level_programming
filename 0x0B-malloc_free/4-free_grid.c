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
void free_grid(int **grid, int __attribute__ ((unused)) height)
{
free(*grid);
free(grid);
}
