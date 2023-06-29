#include "main.h"

/**
 * puts2- Entry point
 * Description: 'the program's description'
 * @str: First operand
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		i++;
		str++;
	}
}
