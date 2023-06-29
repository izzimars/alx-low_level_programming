#include "main.h"

/**
 * _puts- Entry point
 * Description: 'the program's description'
 * @str: First operand
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
