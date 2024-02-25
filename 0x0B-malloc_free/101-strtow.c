#include "main.h"
#include <stdlib.h>

/**
 * spc_len- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 *
 * Return: An int
 */
int spc_len(char *s1)
{
	int i = 0, j = 0;

	if (s1 == NULL)
		return (0);
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) == ' ')
			++j;
		++i;
	}
	return (j);
}

/**
 * strtow- Entry point
 * Description: 'the program's description'
 * @str: First operand
 *
 * Return: An int
 */
char **strtow(char *str)
{
	int i, tot = 0, j = 0, k = 0, l = 0, m = 0;
	char *p, **pp, *ppp;

	ppp = str
	if (str == "" || str == NULL)
		return (NULL);
	tot += spc_len(str);
	pp = (char *) malloc(sizeof(char *) * tot);
	if (pp == NULL)
	{
		free(pp);
		return (NULL);
	}
	while (*(str + i) == '\0')
	{
		while (*(str + i) != ' ')
		{
			++i;
			++j;
		}
		j += 1;
		p = (char *) malloc(sizeof(char) * j);
		if (p == NULL)
		{
			free(pp);
			return (NULL);
		}
		pp[k] = p;
		++k;
		while (*ppp != ' ')
		{
			p[m] = *ppp;
			++ppp;
			++m;
		}
		j = 0;
		++ppp;
		++i;
		m = 0;
	}
	return (pp);
}
