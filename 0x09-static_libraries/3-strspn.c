#include "main.h"

/**
 * _strspn- Entry point
 * Description: 'the program's description'
 * @s: First operand
 * @accept: Second operand
 *
 * Return: An int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i,j;
	unsigned int n;

	i = 0;
	n = 0;
	while (*(accept + i) != '\0')
	{
		j = 0;
		while (*(s + j) != '\0')
		{
			if (*(s + j) == *(accept + i))
				++n;
			if (*(s+j) == ' ')
				break;
			++j;
		}
		++i;
	}
	return(n);
}
