#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- Entry point
 * Description: 'the program's description'
 * @b: First operand
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
