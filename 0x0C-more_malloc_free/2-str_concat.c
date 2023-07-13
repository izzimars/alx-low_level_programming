#include "main.h"
#include <stdlib.h>

/**
 * str_concat- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k, l;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s1 != NULL)
	{
		++i;
	}
	while (s2[j] != '\0' && s2 != NULL)
	{
		++j;
		++i;
	}
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0, l = 0; k < i; k++)
	{
		if (k < (i - j))
			p[k] = s1[k];
		else
		{
			p[k] = s2[l];
			++l;
		}
	}
	p[i] = '\0';
	return (p);
}
