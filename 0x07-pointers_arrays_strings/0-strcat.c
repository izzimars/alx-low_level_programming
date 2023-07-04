#include "main.h"

/**
 * _strcat- Entry point
 * Description: 'the program's description'
 * @dest: First operand
 * @src: Second operand;
 *
 * Return: An int
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		++i;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		++j;
		++i;
	}
	return (dest);
}
