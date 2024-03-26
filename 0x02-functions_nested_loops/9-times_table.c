#include "main.h"
#include <stdio.h>

/**
 * times_table- Entry point
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, l;

	i = 0;
	j = 0;
	while (2 > 1)
	{
		l = i * j;
		if (j == 0)
		{
			_putchar(l + '0');
		}
		else
		{
			_putchar(32);
			if (l < 10)
			{
				_putchar(32);
				_putchar(l + '0');
			}
			else if (l >= 10)
			{
				_putchar((l / 10)  + '0');
				_putchar((l % 10) + '0');
			}
		}
		if (j == 9)
		{
			if (i == 9)
			{
				_putchar('\n');
				break;
			}
			j = 0;
			i++;
			_putchar('\n');
			continue;
		}
		_putchar(44);
		j++;
	}
}
