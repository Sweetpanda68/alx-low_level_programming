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
	int **mer;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mer = malloc(sizeof(int *) * height);

	if (mer == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mer[x] = malloc(sizeof(int) * width);

		if (mer[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mer[x]);

			free(mer);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mer[x][y] = 0;
	}

	return (mer);
}
