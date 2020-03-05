#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: integer width of matrix
 * @height: Integer height of matrix
 * Return: null if not possible to allocate, otherwise address to first element
 */

int **alloc_grid(int width, int height)
{
	int **matrix, j, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(void *) * height);

	if (!matrix)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int *) * width);
		if (!matrix[i])
		{
			for (j = 0; j <= i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
