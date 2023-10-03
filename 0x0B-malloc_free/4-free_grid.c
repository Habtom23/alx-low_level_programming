#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees a 2D grid
  * @grid: pointer to pointer.
  * @height: height of grid.
  * Return: 0 if success
  */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

int main(void)
{

	int height = 3;
	int **grid = alloc_grid(height);

	free_grid(grid, height);

	return (0);
}
