#include "main.h"

/**
 * free_grid-the function free memory used to create a two dimentional array
 * @grid: pointer to the dimentional array
 * @height: the height of the array
 *
 * Return: the function does not return anything
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
