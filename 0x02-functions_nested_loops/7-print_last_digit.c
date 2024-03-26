#include "main.h"
#include <stdio.h>

/**
 * print_last_digit- Entry point
 * Description: 'the program's description'
 * @c: First operand
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = c * -1;
	_putchar(c + '0');
	return (c);
}
