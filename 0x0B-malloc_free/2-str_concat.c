#include "main.h"
#include <stdlib.h>

/**
 * str_len- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 *
 * Return: An int
 */
int str_len(char *s1)
{
	int i = 0;

	if (s1 == NULL)
		return (0);
	while (*(s1 + i) != '\0')
		++i;
	return (i);
}

/**
 * str_concat- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: An int
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	char *pp;
	int i, l, j, m, n, k = 0;

	pp = s1;
	k = str_len(pp);
	i = k;
	pp = s2;
	k += str_len(pp);
	j = k - i;
	l = 0;
	m = 0;
	n = 0;
	p = (char *) malloc(sizeof(char) * (k + 1));
	while (l < k)
	{
		if ((i != 0) && (*(s1 + n) != '\0'))
		{
			p[l] = *(s1 + l);
			++n;
		}
		else if ((j != 0) || (*(s2 + m) != '\0'))
		{
			p[l] = *(s2 + m);
			++m;
		}
		else if ((l - m - n) == 0)
			break;
		++l;
	}
	p[k + 1] = '\0';
	return (p);
}
