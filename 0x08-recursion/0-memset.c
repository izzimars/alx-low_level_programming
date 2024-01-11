#include "main.h"

/**
 * _memset- Entry point
 * Description: 'the program's description'
 * @b: First operand
 * @s: Second operand
 * @n: Third operand
 *
 * Return: An int
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		++i;
	}
	return(s);
}
