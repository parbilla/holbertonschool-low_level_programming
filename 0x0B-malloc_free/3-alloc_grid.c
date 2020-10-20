#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - 2 dimensional array
 * @height: row
 * @width: col
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, h;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	p = (int **) malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (p[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
		else
		{
			for (h = i; h >= 0; h--)
			{
				free(p[h]);
			}
			free(p);
		}
	}
	return (p);
}
