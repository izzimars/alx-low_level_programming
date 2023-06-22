#include "main.h"
#include <stdio.h>

/**
 * _islower- Entry point
 * Description: 'the program's description'
 * @c: First operand
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i,j,k,l;

	i = 0;
	j = 0;
	while (2 > 1)
	{
		l = i * j;
		++j;
		if (l < 10)
		{
			_putchar(l + '0');
			_putchar(44);
			_putchar(32);
		}
		if (l > 10)
		{
			k = l / 10;
			l = l % 10;
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar(44);
		}
		_putchar(32);
		if (j > 9)
		{
			j = 0;
		        ++i;
			_putchar('\n');
		}
		if (i > 9)
			return;
	}
}
