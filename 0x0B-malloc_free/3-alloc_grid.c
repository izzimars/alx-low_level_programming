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
	int i = 0, j = 0, m = 0, n = 0;
	int *p, **pp;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	pp = (int **) malloc(sizeof(p) * width);
	p = (int *) malloc(sizeof(int) * height * width);
	if (p == NULL || pp == NULL)
	{
		free(pp);
		free(p);
		return (NULL);
	}
	while (i < width)
	{
		pp[i] = &(p[j]);
		i++;
		j += height;
	}
	while (n < width)
	{
		while (m < height)
		{
			pp[n][m] = 0;
			m++;
		}
		++n;
		m = 0;
	}
	return (pp);
}
