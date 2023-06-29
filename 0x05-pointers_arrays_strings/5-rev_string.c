#include "main.h"
#include <stdio.h>

/**
 * rev_string- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	char *str;

	i = 0;
	str = &(*s);
	while (*str != '\0')
	{
		i++;
		str++;
		putchar(*str);
	}
	putchar('\n');
	while (i > 0)
	{
		i--;
		str--;
		*s = *str;
		putchar(*s);
		putchar(*str);
		s++;
	}
	putchar('\n');
}
