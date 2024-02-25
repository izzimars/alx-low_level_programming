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
 * argstostr- Entry point
 * Description: 'the program's description'
 * @ac: First operand
 * @av: Second operand
 *
 * Return: An int
 */
char *argstostr(int ac, char **av)
{
	int i, tot = 0, j = 0;
	char *p, *pp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
		tot += str_len(av[i]);
	tot = tot + ac - 1;
	pp = (char *) malloc(sizeof(char) * tot);
	if (pp == NULL)
	{
		free(pp);
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		p = av[i];
		while (*p != '\0')
		{
			pp[j] = *p;
			++p;
			++j;
		}
		pp[j] = '\n';
		++j;
	}
	pp[tot - 1] = '\n';
	pp[tot] = '\0';
	return (pp);
}
