#include "main.h"

/**
 * _strlen- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: An int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
