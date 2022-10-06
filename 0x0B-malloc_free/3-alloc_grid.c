#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 *
 * @width: Array width (column)
 *
 * @height: Array height (row)
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int a, b, **ptr;

	if (width == 0 || width == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		*(ptr + a) = malloc(sizeof(int) * width);
		if (*(ptr + a) == NULL)
		{
			for (a = 0; a < height; a++)
			{
				free(*(ptr + a));
			}
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
