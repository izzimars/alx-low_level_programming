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
	unsigned int i, k, l, tot;

	i = 0;
	l = 0;
	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i] != '\0' && s1 != NULL)
		{
			++i;
		}
	}
	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (s2 == NULL)
		tot = i;
	else
		tot = i + n;
	for (k = 0, l = 0; k < tot; k++)
	{
		if (k < i)
			p[k] = s1[k];
		else
		{
			p[k] = s2[l];
			++l;
		}
	}
	p[tot] = '\0';
	return (p);
}
