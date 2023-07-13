#include "main.h"
#include <stdlib.h>

/**
 * array_range- Entry point
 * Description: 'the program's description'
 * @min: First operand
 * @max: Second operand
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int k;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (k = 0; min <= max; k++)
	{
		p[k] = min;
		++min;
	}
	return (p);
}
