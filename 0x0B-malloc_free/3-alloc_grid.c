#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- Entry point
 * Description: 'the program's description'
 * @width: First operand
 * @height: Second operand
 *
 * Return: An int
 */
int **alloc_grid(int width, int height)
{
	int j = 0, m = 0, n = 0;
	int **pp;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	pp = (int **) malloc(sizeof(int *) * height);
	if (pp == NULL)
	{
		free(pp);
		return (NULL);
	}
	for (n = 0; n < width; ++n)
	{
		pp[n] = (int *) malloc(sizeof(int) * width);
		if (pp[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(pp[n]);
			free(pp);
			return (NULL);
		}
	}
	for (j = 0; j < height; ++j)
	{
		for (m = 0; m < width; ++m)
			pp[j][m] = 0;
	}
	return (pp);
}
