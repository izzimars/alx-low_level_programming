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
	int *p;
	int **pp;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	pp = (int **) malloc(sizeof(p) * width);
	p = (int *) malloc(sizeof(int) * height * width);
	while (i < width)
	{
		pp[i] = &(p[j]);
		i++;
		j += height;
	}
	return (pp);
}
