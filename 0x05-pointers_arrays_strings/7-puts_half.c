#include "main.h"

/**
 * puts_half- Entry point
 * Description: 'the program's description'
 * @str: First operand
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i,j;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	i--;
	j = i / 2;
	while (i > 0)
	{
		if (i > j/2)
			_putchar(*str);
		str--;
		i--;
	}
}
