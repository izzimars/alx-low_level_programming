#include "main.h"
#include <stdio.h>

/**
 * cap_string- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 *
 * Return: An int
 */
char *cap_string(char *s1)
{
	char j;
	int i;
	int check;

	i = 0;
	check = 0;
	while (*(s1 + i) != '\0')
	{
		j = *(s1 + i);
		if (j == 9 || j == 44 || j == 59 || j == 46 || j == 33 || j == 63)
			check = 1;
		if (j == 32 || j == 34 || j == 40 || j == 41 || j == 123 || j == 125)
			check = 1;
		if (check)
		{
			if (j >= 97 && j <= 122)
			{
				j = j - 32;
				*(s1 + i) = j;
				check = 0;
			}
			else if (j >= 65 && j <= 90)
				check = 0;
		}
		++i;
	}
	return (s1);
}
