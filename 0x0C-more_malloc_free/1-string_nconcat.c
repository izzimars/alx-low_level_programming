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
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, k = 0;
	unsigned int j = 0, l = 0;
	char *p;

	k = str_len(s1);
	l = str_len(s2);
	if (n > l)
		n = l;
	p = malloc(sizeof(char) * (k + n + 1));
	if (p == NULL)
		return (NULL);
	while (i < k)
	{
		p[i] = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
