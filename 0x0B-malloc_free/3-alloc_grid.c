#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/
int **alloc_grid(int width, int height)
{
	int **two_dim;
	int width_indx, height_indx;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim = malloc(height * sizeof(int *));
	if (two_dim == NULL)
		return (NULL);

	for (width_indx = 0; width_indx < height; width_indx++)
	{
		two_dim[width_indx] = malloc(width * sizeof(int));
		if (two_dim[width_indx] == NULL)
		{
			while (width_indx >= 0)
			{
				free(two_dim[width_indx]);
				width_indx--;
			}
			free(two_dim);
			return (NULL);
		}
		for (height_indx = 0; height_indx < width; height_indx++)
			two_dim[width_indx][height_indx] = 0;
	}
	return (two_dim);
}
