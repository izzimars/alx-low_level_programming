#include "main.h"
#include <stdio.h>

/**
 * string_toupper- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 *
 * Return: An int
 */
char *string_toupper(char *s1)
{
	char j;
	int i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		j = *(s1 + i);
		if (j >= 97 && j <= 122)
		{
			j = j - 32;
			*(s1 + i) = j;
		}
		++i;
	}
	return (s1);
}
