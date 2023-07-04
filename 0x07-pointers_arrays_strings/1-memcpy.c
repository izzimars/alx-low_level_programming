#include "main.h"

/**
 * _memcpy- Entry point
 * Description: 'the program's description'
 * @dest: First operand
 * @src: Second operand
 * @n: Third operand
 *
 * Return: An int
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return(dest);
}
