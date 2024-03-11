#include "main.h"
/* */
/**
* free_grid - function that  frees a 2 dimensional
* array of integers.
* @grid: the 2d array to be freed
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
