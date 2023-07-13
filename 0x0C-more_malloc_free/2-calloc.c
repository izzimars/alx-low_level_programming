#include "main.h"
#include <stdlib.h>

/**
 * _calloc- Entry point
 * Description: 'the program's description'
 * @nmemb: First operand
 * @size: Second operand
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < nmemb; k++)
	{
		p[k] = 0;
	}
	return (p);
}
