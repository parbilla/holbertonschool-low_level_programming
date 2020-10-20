#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free grid
 * @height: row
 * @grid: grid
 *
 * Return: always
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
