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
	int i = 0;
	
	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
