#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensioanl array of intergers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure if width or height is 0 || -1 return NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
		ptr[h] = malloc(sizeof(int) * width);
	if (ptr[h] == NULL)
	{
		for (; h >= 0; h--)
		{
			free(ptr[h]);
		}
		free(ptr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);
}
