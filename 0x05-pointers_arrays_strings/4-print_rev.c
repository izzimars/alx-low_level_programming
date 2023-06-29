#include "main.h"
#include <stdio.h>

/**
 * print_rev- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
}
