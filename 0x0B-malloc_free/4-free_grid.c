#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 *
 * @matrix: address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: nothing
 * Author: IanoNjuguna
 */
void free_grid(int **matrix, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(matrix[idx]);
	}

	free(matrix);
}
