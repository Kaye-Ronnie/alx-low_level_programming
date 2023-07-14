#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **cd;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	cd = malloc(sizeof(int *) * height);

	if (cd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		cd[x] = malloc(sizeof(int) * width);

		if (cd[x] == NULL)
		{
			for (; x >= 0; x--)
				free(cd[x]);

			free(cd);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			cd[x][y] = 0;
	}

	return (cd);
}
