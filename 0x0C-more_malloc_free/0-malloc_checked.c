#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- Entry point
 * Description: 'the program's description'
 * @b: First operand
 *
 * Return: A pointer of type char
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}
