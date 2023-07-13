#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 * @n: Third operand
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, k, l;

	i = 0;
	l = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		++i;
	}
	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0, l = 0; k < (i + n + 1); k++)
	{
		if (k < i)
			p[k] = s1[k];
		else
		{
			p[k] = s2[l];
			++l;
		}
	}
	p[i + n + 1] = '\0';
	return (p);
}
