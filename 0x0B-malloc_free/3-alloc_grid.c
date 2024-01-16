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
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	int *p;
	int **pp;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	pp = (int **) malloc(sizeof(p) * width);
	p = (int *) malloc(sizeof(int) * height * width);
	while (i < width)
	{
		while (m < height)
		{
			p[n] = 0;
			++m;
			++n;
		}
		m = 0;
		pp[i] = &(p[j]);
		i++;
		j += height;
	}
	return (pp);
}
