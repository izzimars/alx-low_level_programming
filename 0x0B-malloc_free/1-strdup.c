#include "main.h"
#include <stdlib.h>

/**
 * _strdup- Entry point
 * Description: 'the program's description'
 * @chr: First operand
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
	if (str == NULL)
		return (NULL);
}
