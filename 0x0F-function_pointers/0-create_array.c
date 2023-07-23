#include "main.h"
#include <stdlib.h>

/**
 * create_array- Entry point
 * Description: 'the program's description'
 * @c: First operand
 * @size: Second operand
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size != 0)
	{
		p = malloc(size * sizeof(c));
		if (p == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	else
		return (NULL);
}
