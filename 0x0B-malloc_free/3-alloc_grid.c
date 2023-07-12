#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - draft
 * @width: draft
 * @height: draft
 * Return: draft
 */
int **alloc_grid(int width, int height)
{
	int **n, r, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(sizeof(int *) * height);
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}	r = 0;
	c = 0;
	for (r = 0; r < height; r++)
	{
		n[r] = malloc(sizeof(int) * width);
		if (n[r] == NULL)
		{
			for (--r; r < 0; r--)
			{
				free(n[r]);
				return (NULL);
			}
		}
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
			n[r][c] = 0;
	}
	return (n);
}

