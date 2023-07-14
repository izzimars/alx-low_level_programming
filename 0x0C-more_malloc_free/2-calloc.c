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
	unsigned int k;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size == sizeof(char))
		p = (char *) malloc(nmemb * size);
	else if (size == sizeof(int))
		p = (int *) malloc(nmemb * size);
	else
		p = (long *) malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < nmemb; k++)
	{
		if (size == sizeof(char))
			((char*)p)[k] = 0;
		else if (size == sizeof(int))
			((int*)p)[k] = 0;
		else
			((long*)p)[k] = 0;
	}
	return (p);
}
