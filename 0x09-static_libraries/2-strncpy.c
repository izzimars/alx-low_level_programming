#include "main.h"

/**
 * _strncpy- Entry point
 * Description: 'the program's description'
 * @dest: First operand
 * @src: Second operand;
 * @n: THird operand
 *
 * Return: An int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while ((*(src + j) != '\0') && j < n)
	{
		*(dest + j) = *(src + j);
		++j;
		++i;
	}
	return (dest);
}
