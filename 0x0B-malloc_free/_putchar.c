#include "main.h"
#include <stdlib.h>

/**
 * create_array- Entry point
 * Description: 'the program's description'
 * @size: First operand
 * @c : Second operand
 *
 * Return: A pointer of type char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (i < ((int) (sizeof(char) * size)))
	{
		p[i] = c;
		i++;
	}
	return (p);
}
