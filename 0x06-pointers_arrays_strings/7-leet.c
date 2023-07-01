#include "main.h"
#include <stdio.h>

/**
 * leet- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 *
 * Return: An int
 */
char *leet(char *s1)
{
	int i,k,l;
	char arr[5];

	char str[] = "aeotlAEOTL";
	i = 0;
	arr[0] = 52;
	arr[1] = 51;
	arr[2] = 48;
	arr[3] = 55;
	arr[4] = 49;
	while (*(s1 + i) != '\0')
	{
		l = 0;
		k = 5;
		while (l < 5)
		{
			if (str[l] == *(s1 + i) || str[k] == *(s1 + i))
				*(s1 + i) = arr[l];
			++l;
			++k;
		}
		++i;
	}
	return (s1);
}
