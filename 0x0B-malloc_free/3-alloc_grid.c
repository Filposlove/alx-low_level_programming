#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2. array
 */
int **alloc_grid(int width, int height)
{
	int **doo;
	int x, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	doo = malloc(sizeof(int *) * height);

	if (doo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		doo[x] = malloc(sizeof(int) * width);

		if (doo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(doo[x]);

			free(doo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (j = 0; j < width; j++)
			doo[x][j] = 0;
	}

	return (doo);
}
