#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created.
 * @grid: Input pointer to grid or 2D array.
 * @height: Height of the 2D array.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
