#include "main.h"
#include <stdlib.h>

/**
 * free_grid- Entry point
 * Description: 'the program's description'
 * @width: First operand
 * @height: Second operand
 *
 * Return: An int
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
