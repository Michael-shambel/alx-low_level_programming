#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free two dia arra
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
