#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 * @width: the width of array
 * @height: the height of array
 *
 * Return: the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 0 || height < 0)
	{
		printf("Error");
		return (NULL);
	}


	grid = (int **)malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);

		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[i]);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			*(*(grid + i) + j) = 0;
	}
	return (grid);

}
