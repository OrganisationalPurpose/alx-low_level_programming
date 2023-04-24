#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: first dimension of the matrix
 * @height: second dimension of the matrix
 *
 * Return: pointer to a 2 dimensional array of integers
 * Author: IanoNjuguna
 */
int **alloc_grid(int width, int height)
{
	int **matrix, idx_w, idx_h;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (idx_h = 0; idx_h < height; idx_h++)
	{
		matrix[idx_h] = malloc(width * sizeof(int));

		if (matrix[idx_h] == NULL)
		{
			for (idx_w = 0; idx_w < idx_h; idx_w++)
			{
				free(matrix[idx_w]);
			}
			free(matrix);
			return (NULL);
		}

		for (idx_w = 0; idx_w < width; idx_w++)
		{
			matrix[idx_h][idx_w] = 0;
		}
	}
	return (matrix);
}

