#include "main.h"

/**
 * _strcmp- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 * @s2: Second operand;
 * @n: THird operand
 *
 * Return: An int
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (*(s1 + j) != '\0')
	{
		if (*(s1 + j) == *(s2 + j))
		{
			++j;
			continue;
		}
		else if (*(s1 + j) > *(s2 + j))
			return (15);
		else
			return (-15);
	}
	return (0);
}
