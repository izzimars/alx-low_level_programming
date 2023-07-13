#include "main.h"
#include <stdlib.h>

/**
 * _realloc- Entry point
 * Description: 'the program's description'
 * @ptr: First operand
 * @old_size: Second operand
 * @new_size: Third operand
 *
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pt;
	unsigned int k;

	pt = (char *) ptr;
	p = malloc(new_size);
	if (ptr == NULL)
		return (p);
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		for (k = 0; k <= old_size; k++)
		{
			p[k] = pt[k];
		}
		return (p);
	}
}
