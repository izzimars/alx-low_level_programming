#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked- Entry point
 * Description: 'the program's description'
 * @b: First operand
 *
 * Return: A pointer of type char
 */
void *malloc_checked(unsigned int b)
{
	char *p, *pp;

	p = malloc(INT_MAX);
	if (p == NULL)
	{
		exit (98);
		printf("pppppppppppppppp");
	}
	pp = malloc(b);
	if (pp != NULL)
		return (pp);
	return (p);
}
