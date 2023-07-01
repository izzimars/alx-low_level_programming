#include "main.h"
#include <stdio.h>

/**
 * rot13- Entry point
 * Description: 'the program's description'
 * @s1: First operand
 *
 * Return: An int
 */
char *rot13(char *s1)
{
	int i, l;

	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (*(s1 + i) != '\0')
	{
		l = 0;
		while (l < 52)
		{
			if (str[l] == *(s1 + i))
			{
				*(s1 + i) = rot[l];
				break;
			}
			++l;
		}
		++i;
	}
	return (s1);
}
