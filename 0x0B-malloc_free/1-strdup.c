#include "main.h"
#include <stdlib.h>

/**
 * _strdup- Entry point
 * Description: 'the program's description'
 * @str: First operand
 *
 * Return: An int
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j = 0;
	char *pp;

	pp = str;
	if (str == NULL)
		return (NULL);
	while (*pp != '\0')
	{
		pp++;
		i++;
	}
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	while (j < i)
	{
		p[j] = *(str + j);
		j++;
	}
	return (p);
}
