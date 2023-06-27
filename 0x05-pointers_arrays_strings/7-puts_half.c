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
	int i;
	char *s;

	i = 0;
	s = str;
	while (**s != '\0')
	{
		i++;
		s++;
	}
	i = i / 2;
	i = i - 1;
	while (i > 0)
	{
		_putchar(*str);
		str++;
		i--;
	}
}
