#include "main.h"
#include <stdlib.h>

/**
 * free_grid - draft
 * @grid: draft
 * @height: draft
 * Return: draft
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
