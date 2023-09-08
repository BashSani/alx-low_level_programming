#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers
 * @grid: first integer
 * @height: second integer
 * Return: Always(0)
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
