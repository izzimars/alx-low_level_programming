#include "main.h"

/**
 * _puts_recursion- Entry point
 * Description: 'the program's description'
 * @s: First operand
 *
 * Return: An int
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
