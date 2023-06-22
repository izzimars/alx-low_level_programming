#include "main.h"
#include <stdio.h>

/**
 * _islower- Entry point
 * Description: 'the program's description'
 * @c: First operand
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	c = c % 10;
	_putchar(c + '0');
	return(c);
}
