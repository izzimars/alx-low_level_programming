#include "main.h"
#include <stddef.h>

/**
 * _strchr- Entry point
 * Description: 'the program's description'
 * @s: First operand
 * @c: Second operand
 *
 * Return: An int
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return(s + i);
		++i;
	}
	return(NULL);
}
